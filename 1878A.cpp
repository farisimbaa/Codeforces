#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n, k, x;
    bool found;

    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        found = false;
        for (int j = 0; j < n; j++) {
            cin >> x;
            if (x == k) {
                found = true;
            }
        }
        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}