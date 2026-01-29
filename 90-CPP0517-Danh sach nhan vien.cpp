#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    string ma, hoten, gioitinh, ngaysinh;
    string diachi, masothue, ngayky;
};

int cnt = 1;

void nhap(NhanVien &a){
    static bool first = true;
    if(first){
        cin.ignore();   
        first = false;
    }

    string s = to_string(cnt++);
    while(s.length() < 5) s = "0" + s;
    a.ma = s;

    getline(cin, a.hoten);
    getline(cin, a.gioitinh);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    getline(cin, a.masothue);
    getline(cin, a.ngayky);
}

void inds(NhanVien ds[], int N){
    for(int i = 0; i < N; i++){
        cout << ds[i].ma << " " << ds[i].hoten << " " << ds[i].gioitinh << " ";
        cout << ds[i].ngaysinh << " " << ds[i].diachi << " ";
        cout << ds[i].masothue << " " << ds[i].ngayky << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}

