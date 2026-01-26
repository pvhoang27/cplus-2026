#include <bits/stdc++.h>
using namespace std;

long long fibo(int n) {
    static long long f[93];
    if (f[1] == 0) {
        f[1] = f[2] = 1;
        for (int i = 3; i <= 92; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
    }
    return f[n];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++) {
            cout << fibo(i) << " ";
        }
        cout << endl;
    }
}

