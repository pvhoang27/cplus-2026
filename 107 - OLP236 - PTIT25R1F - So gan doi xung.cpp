#include<bits/stdc++.h>
using namespace std;
bool nearPalindrome(int x) {
    string s = to_string(x);
    int l = 0, r = s.size() - 1;
    int cnt = 0;

    while (l < r) {
        if (s[l] != s[r]) cnt++;
        if (cnt > 1) return false;
        l++; r--;
    }
    return true;
}
int main(){
	int t ; cin >> t;
	while(t--){
		int a , b ; cin >> a >> b;
		int cnt = 0 ; 
		for(int i = a ; i <= b ; i++){
			if(nearPalindrome(i)) cnt ++;
		}
		cout << cnt << endl;
	}
}
