#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t-- ){
		int n ; cin >> n;
		
		long long pos[n];
		for(int i = 0 ; i < n; i++) pos[i] = -1;
		for(int i = 0 ; i < n; i++) {
			long long x ; cin >> x; 
			if(x >= 0  && x < n ) {
				pos[x] = x ;
			}
		}
		for(int i = 0 ; i < n; i++) {
			cout << pos[i] << " ";
			
		}
		cout << endl;
		
	}
}
