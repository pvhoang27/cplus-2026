#include<bits/stdc++.h>
using namespace std;
int fibo(long long n){
   //2 so fibonacci f0 va f1
   if(n == 0 || n == 1){
      return 1;
   }
   long long fn1 = 1, fn2 = 0, fn;
   //sinh ra so fibonacci tu f2 toi f92
   for(int i = 2; i <= 92; i++){
      fn = fn1 + fn2;
      if(fn == n){
         return 1;
      }
      //dich fn1 fn2 sang 2 gia tri tiep theo
      fn2 = fn1;
      fn1 = fn;
   }
   return 0;
}
int main(){
	int t; cin >>  t ; 
	while(t--){
		long long n; cin >> n;
		if(fibo(n)) cout <<"YES" << endl;
		else cout <<"NO" << endl;
		}
}
