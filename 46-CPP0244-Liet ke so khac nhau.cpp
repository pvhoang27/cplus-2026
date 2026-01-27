#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t ;
	set<int> s ;
	int x;
	for(int i = 0 ; i < t ; i++){
		cin >> x ;
		s.insert(x);
	}
	for(int k : s){
		cout << k << " ";
	}
	cout << endl;
	
}
