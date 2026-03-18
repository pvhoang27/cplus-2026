#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t ;
	while(t--){
		int n  ; cin >> n ;
		int a[n];
		bool ok = false ; 
		int mx = INT_MIN;
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		for(int i = 0 ; i < n ; i++){
			for(int j = i + 1 ; j < n; j ++){
				if(a[j] - a[i] > 0 ){
					int res = a[j] - a[i] ;
					mx =  max(mx , res );
					ok = true;
				}
//				else ok = false ;
			}
		}
		if(ok == true) cout << mx << endl;
		else cout << "-1" << endl;
	}
}
