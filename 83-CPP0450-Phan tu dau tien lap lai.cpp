#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a[n];
        static int cnt[1000001];   

//        for (int i = 0; i <= 1000000; i++) cnt[i] = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        bool ok = false;
        for (int i = 0; i < n; i++) {
            if (cnt[a[i]] > 1) {
                cout << a[i];
                ok = true;
                break;
            }
        }

        if (!ok) cout << -1;
        cout << endl;
    }
}

