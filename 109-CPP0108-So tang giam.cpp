#include<bits/stdc++.h>
using namespace std;

bool snt(long long n){
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int n;
int cnt;

void sinhTang(int pos, int last, long long val){
    if(pos == n){
        if(snt(val)) cnt++;
        return;
    }
    for(int d = last + 1; d <= 9; d++){
        sinhTang(pos + 1, d, val * 10 + d);
    }
}

void sinhGiam(int pos, int last, long long val){
    if(pos == n){
        if(snt(val)) cnt++;
        return;
    }
    for(int d = last - 1; d >= 0; d--){
        sinhGiam(pos + 1, d, val * 10 + d);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;

        for(int i = 1; i <= 9; i++){
            sinhTang(1, i, i);
        }

        for(int i = 9; i >= 1; i--){
            sinhGiam(1, i, i);
        }

        cout << cnt << endl;
    }
}

