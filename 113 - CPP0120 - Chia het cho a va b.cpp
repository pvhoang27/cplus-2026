#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t ;
	while(t--){
		int a , b , m , n ; cin >> a >> b >> m >> n;
		int cnt = 0 ; 
		for(int i = a  ;  i <= b; i++){
			if(i % m == 0  || i % n == 0 )  cnt ++;
		}
		cout << cnt << endl;
	}
}
