#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n, x, count, maxCount;

    for (int i = 0; i < t; i++) {
        cin >> n;
        maxCount = 0;
        count = 0;

        for (int j = 0; j < n; j++) {
            cin >> x;
            if (x == 1) {
                maxCount = max(maxCount, count);
                count = 0;
            }
            else count++;
        }
        maxCount = max(maxCount, count);
        cout << maxCount << endl;
    }
}