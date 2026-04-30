#include<bits/stdc++.h>
using namespace std;

int main(){
	int t  ; cin >> t ; 
	while(t--){
		string ma ; cin >> ma ; 
		string a[15];
		
		string d101[15] = {"A","B","B","A","D","C","C","A","B","D","C","C","A","B","D"};
    	string d102[15] = {"A","C","C","A","B","C","D","D","B","B","C","D","D","B","B"};
    	
    	for(int i = 0 ; i < 15 ; i ++) cin >> a[i] ;
    	int cnt = 0 ; 
    	
    	if(ma == "101"){
    		for(int i = 0 ; i < 15; i++){
    			if(a[i] == d101[i]) cnt ++; 
			}
		}
		else {
			for(int i = 0 ; i < 15; i++){
    			if(a[i] == d102[i]) cnt ++; 
			}
		}
		
		double diem = (double) cnt * 10.0 / 15;
		cout << fixed << setprecision(2) << diem << endl;
	}
}
