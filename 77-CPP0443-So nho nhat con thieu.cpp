#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;

        long long sumA = 0, x;
        for (int i = 0; i < n - 1; i++) {
            cin >> x;
            sumA += x;
        }

        long long S = n * (n + 1) / 2;
        cout << S - sumA << "\n";
    }

    return 0;
}

