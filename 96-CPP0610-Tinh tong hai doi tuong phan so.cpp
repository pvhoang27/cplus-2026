#include <bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    long long tu, mau;
public:
    PhanSo(long long t = 0, long long m = 1) {
        tu = t;
        mau = m;
    }

    friend istream& operator >> (istream &in, PhanSo &p) {
        in >> p.tu >> p.mau;
        return in;
    }

    void rutgon() {
        long long g = __gcd(tu, mau);
        tu /= g;
        mau /= g;
    }

    friend PhanSo operator + (PhanSo a, PhanSo b) {
        PhanSo res;
        res.tu = a.tu * b.mau + b.tu * a.mau;
        res.mau = a.mau * b.mau;
        res.rutgon();
        return res;
    }

    friend ostream& operator << (ostream &out, PhanSo p) {
        out << p.tu << "/" << p.mau;
        return out;
    }
};

int main() {
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}

