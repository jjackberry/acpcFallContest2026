// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    //c[i] = how much customer i will pay 
    //start 1 so customer i arrives at minute i
    vector<long long> c(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }

    //dp[i] = the most money we can make using only customers i, i+1, ..., n
    //size is n + m + 2 so that dp[i + m] never goes out of bounds
    vector<long long> dp(n + m + 2, 0);

    // go backwards from the last customer to the first
    //so when we're at customer i, the answers for later customers are already done
    for (int i = n; i >= 1; i--) {
        long long skip = dp[i + 1];
        long long take = c[i] + dp[i + m];

        dp[i] = max(skip, take);//which earns more. pick that one
    }

    //dp[1] = best we can do starting from the very first customer
    cout << dp[1] << endl;
    
    return 0;
}