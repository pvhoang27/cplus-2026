#include<bits/stdc++.h>
using namespace std;
long long  ucln(long long  a, long long  b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}
long long  bcnn(long long  a , long long  b){
	return a * b / ucln(a, b);
}
int main(){
	int t ; cin >> t;
	while(t--){
		long long  a  ; cin >> a ;
		long long res = 1 ;
		for(int i =2 ; i <= a; i++ ){
			res = bcnn(res , i );
		}
		cout << res << endl;
	}
}
