#include<bits/stdc++.h>
using namespace std ;
bool isFibonacci(long long n) {
    if (n < 0) return false;
    if (n == 0 || n == 1) return true;

    long long f1 = 0, f2 = 1, f3 = 1;
    // T?o dãy Fibo cho d?n khi f3 >= n
    while (f3 < n) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    // N?u f3 b?ng n thì n là s? Fibo
    return f3 == n;
}

int main(){
	int t ; cin >> t ;
	while(t--){
		int n ; cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		for(int i = 0 ; i < n; i++){
			if(isFibonacci(a[i])) cout << a[i] << " ";
		}
		cout << endl;
	}
}
