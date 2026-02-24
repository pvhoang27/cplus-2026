#include <bits/stdc++.h>
using namespace std;

int main(){


    int N;
    string S;
    cin >> N >> S;

    long long ans = 0;
    for(int i = 0; i < N; ){
        int j = i;
        while(j < N && S[j] == S[i]) j++;
        long long len = j - i;
        ans += len * (len - 1) / 2;
        i = j;
    }

    cout << ans;
    return 0;
}

