#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char &c : s) c = tolower(c);

    stringstream ss(s);
    vector<string> v;
    string x;
    while (ss >> x) v.push_back(x);

    int n = v.size();

    for (int i = 0; i < n; i++) {
        v[i][0] = toupper(v[i][0]);
    }

    for (int i = 0; i < n - 1; i++) {
        cout << v[i];
        if (i < n - 2) cout << " ";
    }

    cout << ", ";
    for (char c : v[n - 1])
        cout << (char)toupper(c);
}

