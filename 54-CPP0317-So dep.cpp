#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	for(auto c : s){
		if(c % 2 != 0) return false;
	}
	return true;
}
int main(){
	int t ; cin >> t;
	while(t--){
		string s ; cin >> s;
		if(check(s)) cout << "YES"<<endl;
		else cout <<"NO" << endl;
 	}
}
