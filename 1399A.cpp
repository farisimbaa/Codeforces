#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n;
    bool ans;

    for (int i = 0; i < t; i++) {
        cin >> n;
        ans = true;
        vector<int> v(n);

        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }

        sort(v.begin(), v.end());

        for (int j = 0; j < n-1; j++) {
            if (v[j] - v[j+1] < - 1) {
                ans = false;
                break;
            }
        }

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}