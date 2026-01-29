#include <bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    long long tu, mau;
public:
    // constructor
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

    friend ostream& operator << (ostream &out, PhanSo p) {
        out << p.tu << "/" << p.mau;
        return out;
    }
};

int main() {
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}

