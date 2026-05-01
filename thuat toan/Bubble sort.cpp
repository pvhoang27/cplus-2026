#include<bits/stdc++.h>
using namespace std;
void  bbsort(int a[] , int n ){
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = 0 ; j < n - 1 ; j++){
			if(a[i] > a[j + 1]){
				int temp  = a[j];
				a[j] = a[j + 1];
				a[j + 1 ] = temp;
			}
		}
	}
}
int main(){
	int a[100]; 
	int n ; cin >> n;
	for(int i = 0 ; i  < n; i++) cin >> a[i];
	bbsort(a  , n );
	for(int i = 0 ; i < n; i++) cout << a[i] << " ";
}
