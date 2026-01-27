#include <bits/stdc++.h>
using namespace std;

int main() {
  

    int T;
    cin >> T;
    while (T--) {
        long long N, K;
        cin >> N >> K;

        long long S = 0;


            long long full = N / K;
            long long rem  = N % K;
            S = full * (K * (K - 1) / 2) + rem * (rem + 1) / 2;
        

        if (S == K) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}

