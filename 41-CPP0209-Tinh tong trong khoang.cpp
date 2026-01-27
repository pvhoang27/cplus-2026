#include <bits/stdc++.h>
using namespace std;

int main(){
  

    int T;
    cin >> T;
    while(T--){
        int n, Q;
        cin >> n >> Q;

        vector<long long> a(n + 1), prefix(n + 1, 0);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        while(Q--){
            int L, R;
            cin >> L >> R;
            cout << prefix[R] - prefix[L - 1] << endl;
        }
    }
}

