#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t--){
		string a ; cin >> a;
		int cnt[100] = {0};
		for(auto x : a){
			cnt[x] ++;
		}
		for(auto x : a){
			if(cnt[x] == 1) cout << x ;
		}
		cout <<endl;
	}
}
