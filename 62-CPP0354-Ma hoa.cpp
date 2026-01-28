#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        string s; 
        cin >> s;

        int cnt[256] = {0};

        for(char c : s){
            cnt[(unsigned char)c]++;
        }

        for(char c : s){
            if(cnt[(unsigned char)c] > 0){
                cout << c << cnt[(unsigned char)c];
                cnt[(unsigned char)c] = 0;
            }
        }
        cout << endl;
    }
}

