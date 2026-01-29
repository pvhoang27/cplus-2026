#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long long tu, mau;
};

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}

PhanSo tong(PhanSo p, PhanSo q){
    PhanSo t;
    t.tu = p.tu * q.mau + q.tu * p.mau;
    t.mau = p.mau * q.mau;

    long long g = gcd(t.tu, t.mau);
    t.tu /= g;
    t.mau /= g;

    return t;
}

void in(PhanSo p){
    cout << p.tu << "/" << p.mau;
}

int main() {
    struct PhanSo p, q;
    nhap(p); 
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}

