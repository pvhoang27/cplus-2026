#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t ; 
    while(t--){
        int n ; cin >>  n;
        int cnt = 0 ; 
        for(int i = 2 ; i <= sqrt(n); i++){
            while( n % i == 0){
                cnt ++ ; 
                n =  n / i ; 
                
            }
            if(cnt > 0 ) {
                cout << i << " " << cnt << endl;
                cnt = 0 ;
            }
        }
    }
}