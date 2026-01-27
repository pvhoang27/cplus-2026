#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, del;
    getline(cin, s);     
    getline(cin, del);   

    stringstream ss(s);
    string word;
    bool first = true;

    while (ss >> word) {
        if (word != del) {
            if (!first) cout << " ";
            cout << word;
            first = false;
        }
    }
    return 0;
}

