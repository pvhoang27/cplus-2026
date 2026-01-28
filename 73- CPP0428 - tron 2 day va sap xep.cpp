#include <bits/stdc++.h>
using namespace std;

int main(){


    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        long long a[n + m];
        int idx = 0;

        for(int i = 0; i < n; i++) cin >> a[idx++];
        for(int i = 0; i < m; i++) cin >> a[idx++];

        sort(a, a + idx);

        for(int i = 0; i < idx; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}

