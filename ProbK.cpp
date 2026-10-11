// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

// Dinic algorithm for max flow
// Create levels graph and find blocking flow V times
// Complexity: O(V^2E); fast for unit graphs - O(Vsqrt(E))
// Reference: https://cp-algorithms.com/graph/dinic.html
// Sample Submission: https://codeforces.com/contest/720/submission/108190820
// Usage: 0-indexed. Just call Dinid d(n), add_edge(a, b, w) and then flow(s, t)

struct FlowEdge {
    int v, u;
    int cap, flow = 0;
    FlowEdge(int v, int u, int cap) : v(v), u(u), cap(cap) {}
};

struct Dinic {
    const int flow_inf = 1e9;
    vector<FlowEdge> edges;
    vector<vector<int>> adj;
    int n, m = 0;
    int s, t;
    vector<int> level, ptr;
    queue<int> q;

    Dinic(int n) : n(n) {
        adj.resize(n);
        level.resize(n);
        ptr.resize(n);
    }

    void add_edge(int v, int u, int cap) {
        edges.push_back({v, u, cap});
        edges.push_back({u, v, 0});
        adj[v].push_back(m);
        adj[u].push_back(m + 1);
        m += 2;
    }

    bool bfs() {
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int id : adj[v]) {
                if (edges[id].cap - edges[id].flow < 1)
                    continue;
                if (level[edges[id].u] != -1)
                    continue;
                level[edges[id].u] = level[v] + 1;
                q.push(edges[id].u);
            }
        }
        return level[t] != -1;
    }

    int dfs(int v, int pushed) {
        if (pushed == 0)
            return 0;
        if (v == t)
            return pushed;
        for (int& cid = ptr[v]; cid < (int)adj[v].size(); cid++) {
            int id = adj[v][cid];
            int u = edges[id].u;
            if (level[v] + 1 != level[u] || edges[id].cap - edges[id].flow < 1)
                continue;
            int tr = dfs(u, min(pushed, edges[id].cap - edges[id].flow));
            if (tr == 0)
                continue;
            edges[id].flow += tr;
            edges[id ^ 1].flow -= tr;
            return tr;
        }
        return 0;
    }

    int max_flow(int s, int t) {
        int f = 0;
        this->s = s;
        this->t = t;
        while (true) {
            fill(level.begin(), level.end(), -1);
            level[s] = 0;
            q.push(s);
            if (!bfs())
                break;
            fill(ptr.begin(), ptr.end(), 0);
            while (int pushed = dfs(s, flow_inf)) {
                f += pushed;
            }
        }
        return f;
    }
};

const int maxV = 100000;//biggest value cake type or divisor can be

int main() {
    //its a matching problem
    //cakes on one side, guests on the other 
    //and a cake can go to a guest if d divides a
    //we want as many pairs as possible

    //so max flow. just did this in 411 hw
    int n, k;
    cin >> n >> k;

    //cakeCount[x] = how many cakes have type x
    vector<int> cakeCount(maxV + 1, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cakeCount[a]++;
    }

    //guestCount[x] = how many guests have favourite divisor x
    vector<int> guestCount(maxV + 1, 0);
    for (int j = 0; j < k; j++) {
        int d;
        cin >> d;
        guestCount[d]++;
    }
    //0= source
    //1..maxV=cake type nodes
    //maxV+1..2*maxV=divisor nodes. divisor x is node maxV + x
    //2*maxV + 1= sink
    int source = 0;
    int sink = 2 * maxV +1;
    Dinic g(2 * maxV + 2);
    for (int x = 1; x <= maxV; x++) {
        //source is cake type x. capacity is just how many cakes of that type have
        if (cakeCount[x] > 0) {
           g.add_edge(source, x, cakeCount[x]);//CAKECOUNT NOT FKN 1
        }
        if (guestCount[x] > 0){
            g.add_edge(maxV + x, sink, guestCount[x]);
        }
    }
    //go through every divisor d, then every multiple of d
    //those are the cake types d divides
    //only add the edge if BOTH sides actually exist
    for (int d = 1; d <= maxV; d++) {
        if (guestCount[d] == 0) continue;
        for (int mult = d; mult <= maxV; mult += d) {
            if (cakeCount[mult] == 0) continue;//no cakes this type. skip
            g.add_edge(mult, maxV + d, 1000000000);
        }
    }

    cout << g.max_flow(source, sink) << endl;
    return 0;
}