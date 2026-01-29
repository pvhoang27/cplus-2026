#include <bits/stdc++.h>
using namespace std;

static int cnt[1000001];

int main(){


    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;

        for(int i = 0; i <= 1000000; i++) cnt[i] = 0;

        bool ok = false;
        for(int i = 0; i < n; i++){
            int x; 
            cin >> x;
            if(cnt[x]){
                cout << x;
                ok = true;
                for(int j = i + 1; j < n; j++) cin >> x;
                break;
            }
            cnt[x] = 1;
        }

        if(!ok) cout << -1;
        cout << '\n';
    }
}

