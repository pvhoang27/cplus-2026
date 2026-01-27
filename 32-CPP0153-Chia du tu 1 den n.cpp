#include <bits/stdc++.h>
using namespace std;

int main() {
 

    int T;
    cin >> T;
    while (T--) {
        long long N, K;
        cin >> N >> K;

       

        long long full = N / K;   
        long long rem  = N % K;  

        long long sum_cycle = K * (K - 1) / 2;
        long long ans = full * sum_cycle + rem * (rem + 1) / 2;

        cout << ans << '\n';
    }
    return 0;
}

