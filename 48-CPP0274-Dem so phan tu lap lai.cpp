#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int,int> cnt;
        int x, dem = 0;

        for(int i = 0; i < n; i++){
            cin >> x;
            cnt[x]++;
        }

        for(auto it : cnt){
            if(it.second >= 2)
                dem += it.second;
        }

        cout << dem << endl;
    }
}

