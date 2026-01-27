#include <bits/stdc++.h>
using namespace std;

int main(){
 

    int t; 
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        int a[105][105];
        bool row[105] = {0}, col[105] = {0};

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                if(a[i][j] == 1){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(row[i] || col[j])
                    cout << 1 << " ";
                else
                    cout << 0 << " ";
            }
            cout << '\n';
        }
    }
}

