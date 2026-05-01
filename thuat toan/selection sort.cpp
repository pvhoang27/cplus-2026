#include<bits/stdc++.h>
using namespace std;
void ssort(int a[], int n){
	for(int i = 0 ; i < n - 1 ; i++){
		int min_idx = i ;
		for(int j = i + 1 ; j < n ; j++){
			if(a[j] < a[min_idx]) min_idx = j;
		}
		swap(a[i] , a[min_idx]);
	}
}
int main(){
	int n , a[100]; cin >> n;
	for(int i = 0 ;  i < n ; i++) cin >> a[i];
	ssort(a , n);
	for(int i = 0 ; i < n; i++) cout << a[i] << " ";
}
