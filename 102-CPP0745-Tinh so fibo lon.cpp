#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

int main(){
	int t ; cin >> t;  
	while(t--){
		int n ; cin >> n;
		
		vector<long long > 	f(n + 1 );
		f[1] = 1 ; 
		f[2] = 1 ; 
		for(int i = 3 ;  i <= n ; i++){
			f[i] = (f[i-1] + f[i-2 ]) % MOD ;
		}
		
		cout <<f[n]<< endl ;
	}
}
