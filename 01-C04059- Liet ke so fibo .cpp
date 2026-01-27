#include <iostream>
using namespace std;

long long f[93];

void sinh() {
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= 92; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main() {
    sinh();
    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++) {
            cout << f[i] << (i == b ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
