#include<bits/stdc++.h>
using namespace std;
class SinhVien {
private:
    string maSV, hoTen, lop, ngaySinh;
    float gpa;

public:
    SinhVien() {
        maSV = hoTen = lop = ngaySinh = "";
        gpa = 0;
    }

    void nhap() {
        maSV = "B20DCCN001";

        getline(cin, hoTen);
        getline(cin, lop);
        getline(cin, ngaySinh);
        cin >> gpa;

        if (ngaySinh[1] == '/') ngaySinh = "0" + ngaySinh;
        if (ngaySinh[4] == '/') ngaySinh.insert(3, "0");
    }

    void xuat() {
        cout << maSV << " " << hoTen << " " << lop << " " 
             << ngaySinh << " ";
        cout << fixed << setprecision(2) << gpa;
    }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
