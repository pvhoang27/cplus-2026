#include<bits/stdc++.h>
using namespace std;
bool check(string s ){
	int n = s.length();
	for(int i = 0 ; i < n - 1 ; i++){
		if(abs (s[i] - s[i + 1]) != 1  ) return false;
	}
	return true;
}
int main(){
	int t ; cin >> t;
	while(t--){
		string s; cin >> s ; 
		if(check(s))  cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
