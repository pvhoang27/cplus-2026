#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<char> d101 = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    vector<char> d102 = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

    int T;
    cin >> T;
    while (T--) {
        int code;
        cin >> code;

        int correct = 0;
        for (int i = 0; i < 15; i++) {
            char ans;
            cin >> ans;
            if (code == 101 && ans == d101[i]) correct++;
            if (code == 102 && ans == d102[i]) correct++;
        }

        double score = correct * 10.0 / 15;
        cout << fixed << setprecision(2) << score << "\n";
    }
    return 0;
}

