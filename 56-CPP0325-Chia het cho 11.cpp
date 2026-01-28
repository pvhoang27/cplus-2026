#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;

        long long le = 0, chan = 0;

        for (int i = 0; i < n.size(); i++) {
            int digit = n[i] - '0';
            if ((i + 1) % 2 == 1)  
                le += digit;
            else                 
                chan += digit;
        }

        if ((le - chan) % 11 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}

