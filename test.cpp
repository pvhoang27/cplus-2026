#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private :
		string  msv; 
		string ten;
		string ns , lop; 
		float diem  ; 
	public :
		SinhVien(){
			msv = "B20DCCN001";
			ten = "";
			lop = "";
			ns = "";
			diem = 0;
			
		}
		void nhap(){
			getline(cin , ten);
			cin >> lop >> ns >> diem ; 
			
			stringstream ss(ns);
			string token , res  = "";
			
			while (getline(ss, token, '/')) {
	            if (token.length() < 2) res += "0"; 
	            res += token;
	            if (res.length() < 10) res += "/";
        	}
        	ns = res ; 
			
		}
		
		void xuat(){
			
			cout << msv << " " << ten << " "
			<< lop << " " << ns << " "<< fixed << setprecision(2) << diem << endl;
		}
		
		
};



int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
