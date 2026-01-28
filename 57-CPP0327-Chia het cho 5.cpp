#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int mod = 0;
        for (char c : s) {
            mod = (mod * 2 + (c - '0')) % 5;
        }

        if (mod == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}

