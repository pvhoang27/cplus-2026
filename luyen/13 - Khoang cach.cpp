#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t--){
		double  xa , ya , xb ,yb ; cin >> xa >> ya >> xb >> yb;
		double tong =  pow((xa - xb),2) + pow((ya - yb), 2);
		double kc = sqrt(tong);
		cout << fixed << setprecision(4) << kc << endl;
	}
}
