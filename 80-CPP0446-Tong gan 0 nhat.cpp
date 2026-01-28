#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_abs_sum = INT_MAX;
    int result = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int current_sum = a[i] + a[j];
            if (abs(current_sum) < abs(min_abs_sum)) {
                min_abs_sum = current_sum; 
                result = current_sum;
            }
        }
    }
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
