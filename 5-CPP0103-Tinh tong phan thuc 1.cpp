#include<bits/stdc++.h>
using namespace std;

int main(){
	int a  ; cin >> a;
	double sum =  0 ;
	for(int i = 1 ; i <= a ; i++){
		 sum += 1.0/i;
	}
	cout << fixed<< setprecision(4) <<sum << endl;
}
