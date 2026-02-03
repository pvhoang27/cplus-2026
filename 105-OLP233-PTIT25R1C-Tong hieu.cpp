#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long prefix_sum = 0;
    long long ans = 0;

    for (int i = 0; i < N; i++) {
        ans += A[i] * i - prefix_sum;
        prefix_sum += A[i];
    }

    cout << ans;
}

