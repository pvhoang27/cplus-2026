#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Khai báo c?u trúc SinhVien
struct SinhVien {
    string maSV;
    string hoTen;
    string lop;
    string ngaySinh;
    float gpa;
};


void nhapThongTinSV(SinhVien &a) {
    a.maSV = "N20DCCN001";
    
    getline(cin, a.hoTen);
    cin >> a.lop >> a.ngaySinh >> a.gpa;
    
    if (a.ngaySinh[1] == '/') {
        a.ngaySinh = "0" + a.ngaySinh;
    }
    if (a.ngaySinh[4] == '/') {
        a.ngaySinh.insert(3, "0");
    }
}

void inThongTinSV(SinhVien a) {
    cout << a.maSV << "\t" 
         << a.hoTen << "\t" 
         << a.lop << "\t" 
         << a.ngaySinh << "\t";
    
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
