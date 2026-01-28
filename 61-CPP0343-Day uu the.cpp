#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        int x;
        int cntEven = 0, cntOdd = 0;

        while (ss >> x) {
            if (x % 2 == 0) cntEven++;
            else cntOdd++;
        }

        int n = cntEven + cntOdd;

        if ((n % 2 == 0 && cntEven > cntOdd) ||
            (n % 2 == 1 && cntOdd > cntEven)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

