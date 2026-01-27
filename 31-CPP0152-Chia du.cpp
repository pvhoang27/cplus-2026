#include<bits/stdc++.h>
using namespace std ;

int main(){
	int t ; cin >> t;
	while(t--){
		int a , m ; cin >> a >> m;
		for(int i = 1 ; i < m ; i++){
			if( i *  a %  m  == 1  ) cout << i ;
		}
		 cout << endl;
	}
}
