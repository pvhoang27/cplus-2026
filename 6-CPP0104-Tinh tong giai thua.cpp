#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a ; cin >> a;
	long long tich = 1 ;
	long long sum = 0;
	for(int i = 1 ; i <= a ; i++){
		tich  *= i;
		sum += tich;
	}
	cout<< sum << endl;
}
