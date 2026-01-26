#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	for(int i = 1 ; i < s.length(); i++){
		if(abs(s[i] - s[i - 1]) != 1) return false; 
	}
	return true;
}
int main(){
	int t ; cin >> t;
	while(t--){
		string s ; cin >> s;
		if(check(s)) cout<<"YES" << endl;
		else cout << "NO" << endl;
		
	}
}
