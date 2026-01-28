#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    // truong hop ko co dap an
    if ((s == 0 && m > 1) || s > 9 * m) {
        cout << "-1 -1";
        return 0;
     
    }

    // truong hop dac biet
    if (s == 0 && m == 1) {
        cout << "0 0";
        return 0;
    }

    // max
    int tmp = s;
    string maxNum = "";
    for (int i = 0; i < m; i++) {
        int d = min(9, tmp);
        maxNum += char(d + '0');
        tmp -= d;
    }

   //min
    tmp = s - 1; 
    vector<int> a(m, 0);

    for (int i = m - 1; i >= 0; i--) {
        int d = min(9, tmp);
        a[i] = d;
        tmp -= d;
    }
    a[0]++; 

    string minNum = "";
    for (int i = 0; i < m; i++)
        minNum += char(a[i] + '0');

    cout << minNum << " " << maxNum;
}

