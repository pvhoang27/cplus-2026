#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;

        long long x;
        int cnt = 0;

        for(int i = 0; i < n; i++){
            cin >> x;
            if(x == 0) cnt++;
            else cout << x << " ";
        }

        while(cnt--) cout << 0 << " ";
        cout << "\n";
    }
    return 0;
}

