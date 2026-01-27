#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	
	while(t--){
		int n ; cin >> n;
		long long x , ans = 0 ;
		for(int i = 0;  i < n; i++){
			cin >> x ;
			ans = max(ans, x);
		}
		cout << ans << endl;
	}
}
