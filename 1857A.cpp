#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n, x, oddCount;

    for (int i = 0; i < t; i++) {
        cin >> n;
        oddCount = 0;

        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x % 2 != 0) oddCount++;
        }
        if (oddCount % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}