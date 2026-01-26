#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}

int main(){
	int t ; cin >> t;
	while(t--){
		long long  a  , b ; cin >> a >> b;
		long long  uc =  ucln(a, b);
		long long  bc = a * b / uc ; 
		cout << bc << " " << uc << endl;
	}
}
