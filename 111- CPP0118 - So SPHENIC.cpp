#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int cnt = 0;        
        bool ok = true;     

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int power = 0;
                while (n % i == 0) {
                    n /= i;
                    power++;
                }
                if (power > 1) {
                    ok = false;  
                    break;
                }
                cnt++;
            }
        }

        if (n > 1) cnt++;  

        if (ok && cnt == 3)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
