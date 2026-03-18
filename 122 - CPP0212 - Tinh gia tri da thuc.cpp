#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long MOD = 1e9 + 7;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long res = 0;
        for (int i = 0; i < n; i++) {
            res = (res * x + a[i]) % MOD;
        }
        cout << res << endl;
    }
    return 0;
}
