#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
bool check(int n ){
	if (n < 2 ) return false ;
	for(int i = 2 ; i * i <= n ; i++){
		if(n % i == 0 ) return false ;
	}
	return true; 
}
int main(){
	int t ; cin >> t; 
	while(t--){
		int  n; cin >> n;
		int cnt = 0 ;
		for(int i = 1 ; i <= n ; i++){
			if(ucln(i, n) == 1 ) cnt ++;
			
		}
		if(check(cnt)) cout <<"1"<<endl;
			else cout <<"0"<<endl;
	}
}
