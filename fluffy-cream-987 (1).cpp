// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <ostream>
using namespace std;

int main() {
    int d;
    int p;
    cin >> d >> p;

    vector<int> a(d);//length d
    vector<int> b(p);//length p
    for (int i = 0; i < d; i++){
        cin>> a[i];
    }
    for(int i = 0; i <p; i++) {
        cin >> b[i];
    }
    int count = 0;
    for (int i = 0; i < d; i++) {
        for (int welcomeToBpBrother = 0; welcomeToBpBrother < p; welcomeToBpBrother++) {
            if (a[i] != b[welcomeToBpBrother]) {//if they are diff then add 1 to count
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}