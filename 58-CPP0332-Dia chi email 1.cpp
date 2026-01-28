#include<bits/stdc++.h>
using namespace std;

string toLower(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main() {
    string input;
    if (getline(cin, input)) {
        stringstream ss(input);
        string word;
        vector<string> words;
        
        while (ss >> word) {
            words.push_back(toLower(word));
        }

        cout << words.back();

        for (int i = 0; i < words.size() - 1; i++) {
            cout << words[i][0];
        }

        cout << "@ptit.edu.vn" << endl;
    }
    return 0;
}
