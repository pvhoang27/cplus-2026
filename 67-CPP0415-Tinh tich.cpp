#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t; 
	while(t--){
		int na , nb ; 
		cin >> na >> nb;
		int a[na] , b[nb];
		for(int i = 0 ; i < na ; i++) cin >> a[i];
		for(int i = 0 ; i < nb ; i++) cin >> b[i];
		
		sort(a, a + na);
		sort(b, b + nb);

		long long  kq = 1LL* a[na - 1 ] * b[0];
		cout << kq ;
		cout << endl;
	}
}
