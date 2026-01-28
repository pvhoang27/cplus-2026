#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int k, n;
        cin >> k >> n;

        int a[k * n];
        int idx = 0;

        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[idx++];
            }
        }

        sort(a, a + idx);

        for (int i = 0; i < idx; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

