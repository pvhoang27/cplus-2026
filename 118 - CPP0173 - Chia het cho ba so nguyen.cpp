#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return a / gcd(a, b) * b;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long x, y, z, n;
        cin >> x >> y >> z >> n;

        long long l = lcm(lcm(x, y), z);

        long long start = pow(10, n - 1);
        long long end = pow(10, n) - 1;

        long long k = (start + l - 1) / l;
        long long ans = k * l;

        if(ans > end) cout << -1 << endl;
        else cout << ans << endl;
    }
}
