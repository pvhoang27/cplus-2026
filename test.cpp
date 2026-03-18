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
        
        
        string p , q ; 
        
        string s = to_string(a);
        for(int i = 1 ; i <= x ; i++){
        	p += s;
		}
		for(int i = 1 ; i <= y ; i++){
        	q += s;
		}
//		cout << p << " " << q;

		long long ps = stoll(p);
		long long qs = stoll(q);
		
//				cout << ps << " " << qs;

	long long kq = gcd(ps, qs );
	
	cout << kq << endl;

    }
}
