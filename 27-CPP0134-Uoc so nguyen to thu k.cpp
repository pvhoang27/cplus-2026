#include<bits/stdc++.h>
using namespace std;
//bool snt(long long  n){
//	if(n < 2 ) return false;
//	for(long long i = 2 ; i * i <= n ; i++){
//		if(n % i == 0) return false ;
//	}
//	return true;
//}
int main(){
	int t ; cin >> t; 
	while(t--){
		int n , k ; cin >> n >> k;
		bool ok =  false ;  
		int cnt = 0 ; 
		for(int i = 2 ; i * i <= n; i++){
			while(n % i == 0 ){
				cnt ++ ; 
				if(cnt == k ){
					cout << i << endl; 
					ok = true; 
					break; 
				} 
				n /= i ;  
			} 
			if(ok ) break ;  
		} 
		if(!ok && n > 1){
            cnt++;
            if(cnt == k){
                cout << n << endl;
                ok = true;
            }
        }
		if(!ok ) cout << "-1" << endl;
		
	}
}
