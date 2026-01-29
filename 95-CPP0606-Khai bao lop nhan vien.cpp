#include <bits/stdc++.h>
using namespace std;

class NhanVien {
private:
    string ma, ten, gt, ns, dc, mst, nk;
public:
    NhanVien() {
        ma = "00001";
        ten = gt = ns = dc = mst = nk = "";
    }

    friend istream& operator >> (istream &in, NhanVien &a) {
        getline(in, a.ten);
        getline(in, a.gt);
        getline(in, a.ns);
        getline(in, a.dc);
        getline(in, a.mst);
        getline(in, a.nk);
        return in;
    }

    friend ostream& operator << (ostream &out, NhanVien a) {
        out << a.ma << " " << a.ten << " " << a.gt << " "
            << a.ns << " " << a.dc << " " << a.mst << " " << a.nk;
        return out;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}

