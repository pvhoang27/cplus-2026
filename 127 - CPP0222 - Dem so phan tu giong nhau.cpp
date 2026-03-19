#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[105][105];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];

        map<int, int> cnt;

        for(int i = 0; i < n; i++){
            map<int, bool> used;
            for(int j = 0; j < n; j++){
                if(!used[a[i][j]]){
                    cnt[a[i][j]]++;
                    used[a[i][j]] = true;
                }
            }
        }

        int dem = 0;
        for(auto it : cnt){
            if(it.second == n) dem++;
        }

        cout << dem << endl;
    }
}
