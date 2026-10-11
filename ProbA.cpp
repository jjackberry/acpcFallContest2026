/ Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, d;
    cin >> n >> k >> d;

    int bowls = n / k;//integer division, so full bowls only
    cout << bowls * d << endl;

    return 0;
}
