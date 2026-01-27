#include <bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;

        long long a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a + n);

        long long ans = 1;
        for(int i = 0; i < n; i++){
            if(a[i] == ans){
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

