// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

//checks if a number has "67" somewhere in its digits
bool has67(long long num) {
    string s = to_string(num);
    return s.find("67") != string::npos;//find returns npos if 67 isn't in there
}

int main() {
    int T;
    cin >> T;//number of test cases

    while (T--) {
        long long p;
        cin >> p;//the price in cents

        //start at the smallest positive tip and keep going up
        //until both the tip and the total price (tip + p) have "67"
        long long x = 1;
        while (!(has67(x) && has67(x + p))) {
            x++;//this tip didnt work, try next one
        }

        cout << x << endl;
    }

    return 0;
}