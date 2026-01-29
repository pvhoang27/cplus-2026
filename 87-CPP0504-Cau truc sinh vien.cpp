#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma , hoten ,lop , ngaysinh;
	float gpa ; 
};

void nhap(SinhVien &a){
	a.ma = "B20DCCN001";
	getline(cin, a.hoten);
    getline(cin, a.lop);
    getline(cin, a.ngaysinh);
    cin >> a.gpa;
    
    if(a.ngaysinh[1] == '/') a.ngaysinh = "0" + a.ngaysinh;
    if(a.ngaysinh[4] == '/') a.ngaysinh.insert(3, "0");
}

void in(SinhVien a){
    cout << a.ma << " " << a.hoten << " " << a.lop << " ";
    cout << a.ngaysinh << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
