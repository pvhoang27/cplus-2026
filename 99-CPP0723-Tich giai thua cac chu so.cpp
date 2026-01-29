#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        string a;
        cin >> n >> a;

        vector<int> v;

        for(char c : a){
            if(c == '2') v.push_back(2);
            else if(c == '3') v.push_back(3);
            else if(c == '4'){
                v.push_back(3);
                v.push_back(2);
                v.push_back(2);
            }
            else if(c == '5') v.push_back(5);
            else if(c == '6'){
                v.push_back(5);
                v.push_back(3);
            }
            else if(c == '7') v.push_back(7);
            else if(c == '8'){
                v.push_back(7);
                v.push_back(2);
                v.push_back(2);
                v.push_back(2);
            }
            else if(c == '9'){
                v.push_back(7);
                v.push_back(3);
                v.push_back(3);
                v.push_back(2);
            }
        }

        sort(v.begin(), v.end(), greater<int>());

        for(int x : v) cout << x;
        cout << endl;
    }
    return 0;
}

