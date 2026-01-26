#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t--){
		string s ; cin >> s;
		int pos = s.find("084");
		string kq = s.substr(0,pos) + s.substr(pos + 3 );
		cout<<kq<< endl;
	}
}
