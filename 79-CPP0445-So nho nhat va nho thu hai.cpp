#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        int min1 = INT_MAX, min2 = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x < min1) {
                min2 = min1;
                min1 = x;
            } else if (x > min1 && x < min2) {
                min2 = x;
            }
        }

        if (min2 == INT_MAX)
            cout << -1;
        else
            cout << min1 << " " << min2;

        cout << '\n';
    }
    return 0;
}

