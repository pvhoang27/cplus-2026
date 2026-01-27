#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n == 1 || n == 2){
            cout << 1 << endl;
            continue;
        }

        long long  f1 = 1, f2 = 1, fn;
        for(int i = 3; i <= n; i++){
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }

        cout << fn << endl;
    }
}

