#include <iostream>
#include <cmath>

using namespace std;

bool isBalanced(int n) {
    int countEven = 0;
    int countOdd = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) countEven++;
        else countOdd++;
        n /= 10;
    }
    return countEven == countOdd;
}

int main() {
    int n;
    cin >> n;
    int start = 1;
    for (int i = 1; i < n; i++) start *= 10;
    int end = start * 10 - 1;

    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isBalanced(i)) {
            cout << i;
            count++;
            
            if (count % 10 == 0) {
                cout << "\n";
            } else {
                cout << " ";
            }
        }
    }
    
    if (count % 10 != 0) cout << endl;

    return 0;
}