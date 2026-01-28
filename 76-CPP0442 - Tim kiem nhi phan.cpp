#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t--){
		int n  , x ; cin >> n >> x ;
		int a[n];
		bool ok = false ;
		for(int i = 0 ; i < n ; i++) cin  >> a[i];
		for(int i = 0 ; i < n ; i++) {
			if(a[i] == x ) {
				ok = true; 
				break;
			}
		}
		if(ok ) cout << "1" << endl;
		else cout << "-1" << endl;
	}
}
