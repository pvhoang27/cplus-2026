#include<bits/stdc++.h>
using namespace std;

int A[1005], n;

void in(){
    for(int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
}

void hoanvi_truoc(){
    int i = n - 1;
    while(i >= 1 && A[i] < A[i + 1]) i--;

    int j = n;
    while(A[j] > A[i]) j--;

    swap(A[i], A[j]);

    int l = i + 1, r = n;
    while(l < r){
        swap(A[l], A[r]);
        l++; r--;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> A[i];

        hoanvi_truoc();
        in();
    }
    return 0;
}

