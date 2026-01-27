#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
bool prime[MAXN + 1];

void sieve(){
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= MAXN; i++){
        if(prime[i]){
            for(int j = i * i; j <= MAXN; j += i){
                prime[j] = false;
            }
        }
    }
}

int main(){


    sieve();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        bool ok = false;
        for(int i = 2; i <= n / 2; i++){
            if(prime[i] && prime[n - i]){
                cout << i << " " << n - i << "\n";
                ok = true;
                break;
            }
        }

        if(!ok) cout << -1 << "\n";
    }
    return 0;
}

