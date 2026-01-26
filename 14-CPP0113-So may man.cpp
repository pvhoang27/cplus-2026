#include<bits/stdc++.h>
using namespace std;



int main(){
	int t ; cin >> t;
	while(t--){
		string s ; cin >> s;
		int n = s.length();
		
			if(s[n-1] == '6' && s[n - 2 ] == '8') cout  << "1";
			else cout <<"0";
		
		cout << endl;
		
	}
}
