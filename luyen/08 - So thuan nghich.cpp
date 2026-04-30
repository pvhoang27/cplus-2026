#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int n = s.size();
	for(int i = 0 ;  i < n; i++){
		if(s[i] != s[ n - i - 1 ]) return false;
	}
	return true;
}
int main(){
	int t  ; cin >> t ; 
	while(t--){
		string s ; cin >> s;  
		if(check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
