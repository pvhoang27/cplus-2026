#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	for(char c : s){
		if(c != '0' && c != '6' && c!= '8' ) return false;
	}
	return true;
}

int main(){
	int t ; cin >> t;
	while(t--){
		string a ; cin >> a;
		if(check(a)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
