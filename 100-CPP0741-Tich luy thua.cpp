#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll power(ll x, ll y, ll p) {
    ll res = 1;
    x %= p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        x = (x * x) % p;
        y >>= 1;
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        ll x, y, p;
        cin >> x >> y >> p;
        cout << power(x, y, p) << endl;
    }
    return 0;
}

