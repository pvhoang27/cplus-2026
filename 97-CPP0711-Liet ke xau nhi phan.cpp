#include<bits/stdc++.h>
using namespace std;
int B[25],n;
void in(){
    for(int i=1;i<=n;i++) cout << B[i] ;
    cout << " ";
}
void quaylui(int i){
    for(int j=0;j<=1;j++){
        B[i] = j;
        if(i==n) in();
        else quaylui(i+1);
    }
}
main(){
	int t ; cin >> t ; 
	while(t--){
		cin >> n;
    	quaylui(1);
    	cout << endl;
	}
    
}
