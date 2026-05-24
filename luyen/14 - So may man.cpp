#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int n = s.length();
	if(s[n-1] != '6' || s[n -2] != '8') return false ;
	return true ; 
}
int main(){
	int t; cin >> t ; 
	while(t--){
		string s ; cin >> s ;
		if(check(s)) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
