#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long temp = n;
        long long cnt2 = 0;

        while(temp % 2 == 0){
            cnt2++;
            temp /= 2;
        }

        if(cnt2 == 0){
            cout << 0 << endl;
            continue;
        }

        long long ans = 1;

        for(long long i = 3; i * i <= temp; i += 2){
            long long cnt = 0;
            while(temp % i == 0){
                cnt++;
                temp /= i;
            }
            if(cnt > 0) ans *= (cnt + 1);
        }

        if(temp > 1) ans *= 2;

        cout << ans * cnt2 << endl;
    }
}
