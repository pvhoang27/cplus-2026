#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;

        int pos = -1;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == X && pos == -1) {
                pos = i + 1; 
            }
        }

        cout << pos << '\n';
    }
    return 0;
}

