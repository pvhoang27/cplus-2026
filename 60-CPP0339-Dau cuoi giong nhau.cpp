#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        long long cnt[26] = {0};
        for (char c : s)
            cnt[c - 'a']++;

        long long ans = 0;
        for (int i = 0; i < 26; i++) {
            long long k = cnt[i];
            ans += k + k * (k - 1) / 2;
        }

        cout << ans << '\n';
    }
}

