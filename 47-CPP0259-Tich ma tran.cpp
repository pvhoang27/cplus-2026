#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, p;
    cin >> n >> m >> p;

    long long A[55][55], B[55][55], C[55][55];
	
	// ma tran A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
	
	// ma tran B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }
    
    // ma tran 0 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    // nhan ma tran
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
