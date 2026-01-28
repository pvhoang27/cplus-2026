#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<long long> A(n), B(m);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < m; i++) cin >> B[i];

        vector<long long> uni, inter;
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (A[i] < B[j]) {
                uni.push_back(A[i]);
                i++;
            }
            else if (A[i] > B[j]) {
                uni.push_back(B[j]);
                j++;
            }
            else { // A[i] == B[j]
                uni.push_back(A[i]);
                inter.push_back(A[i]);
                i++;
                j++;
            }
        }

        while (i < n) {
            uni.push_back(A[i]);
            i++;
        }

        while (j < m) {
            uni.push_back(B[j]);
            j++;
        }

    
        for (auto x : uni) cout << x << " ";
        cout << "\n";

     
        for (auto x : inter) cout << x << " ";
        cout << "\n";
    }
    return 0;
}

