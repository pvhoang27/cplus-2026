#include <bits/stdc++.h>
using namespace std;

int main() {
 

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;

        bool used[26] = {false};
        for (char c : s) {
            if (c >= 'a' && c <= 'z')
                used[c - 'a'] = true;
        }

        int cnt = 0;
        for (int i = 0; i < 26; i++)
            if (used[i]) cnt++;

        int missing = 26 - cnt;
        cout << (missing <= k) << '\n';
    }
}

