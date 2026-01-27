#include <bits/stdc++.h>
using namespace std;

bool snt(long long n){
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        long long mx = -1;

        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0){
                if(snt(i)) mx = max(mx, i);
                long long j = n / i;
                if(snt(j)) mx = max(mx, j);
            }
        }

        if(snt(n)) mx = max(mx, n);

        cout << mx << endl;
    }
    return 0;
}

