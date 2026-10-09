#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int x;
    int oddCount = 0, evenCount = 0, oddPos = 0, evenPos = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0) {
            evenCount++;
            evenPos = i + 1;
        } else {
            oddCount++;
            oddPos = i + 1;
        }
    }
    if (oddCount == 1) {
        cout << oddPos << endl;
    } else {
        cout << evenPos << endl;
    }
    
    return 0;
}