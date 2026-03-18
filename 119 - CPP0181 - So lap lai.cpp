#include<bits/stdc++.h>
using namespace std;
long long  gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long a, x, y;
        cin >> a >> x >> y;
        
        long long res = gcd(x,y);
        
        string s = to_string(a);
        for(int i = 1 ; i <= res ; i++){
        	cout << s;
		}
		cout << endl;
    }
}
