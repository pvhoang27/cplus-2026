#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    string ma, hoten, gioitinh, ngaysinh;
    string diachi, masothue, ngayky;
};

void nhap(NhanVien &a){
    a.ma = "00001";
    getline(cin, a.hoten);
    getline(cin, a.gioitinh);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    getline(cin, a.masothue);
    getline(cin, a.ngayky);
}

void in(NhanVien a){
    cout << a.ma << " " << a.hoten << " " << a.gioitinh << " ";
    cout << a.ngaysinh << " " << a.diachi << " ";
    cout << a.masothue << " " << a.ngayky;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

