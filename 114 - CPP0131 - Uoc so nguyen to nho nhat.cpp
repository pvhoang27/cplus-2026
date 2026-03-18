#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t ;
	while(t--){
		int  n ; cin >> n;
		int minnnnn = INT_MAX;
		for(int i = 1 ; i <= n; i++){
			if(i == 1 ) cout << "1" << " ";
			else{
				for(int j = 2 ; j <= i ; j ++){
					if(i % j == 0) {
						cout << min(j , minnnnn) << " ";
						break; 
					}
				}
			}
		} 
		
		cout << endl;
	}
}
