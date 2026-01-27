#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        int so1 = a + b + c; 
        if (so1 > 1) cnt++;
    }

    cout << cnt;
    return 0;
}

