#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;

        set<int> s;
        int x;

        int L = INT_MAX, R = INT_MIN;

        for(int i = 0; i < n; i++){
            cin >> x;
            s.insert(x);
            L = min(L, x);
            R = max(R, x);
        }

        int need = (R - L + 1) - s.size();
        cout << need << "\n";
    }
    return 0;
}

