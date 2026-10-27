#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n, x;
    int a, b, c;

    for (int i = 0; i < t; i++) {
        cin >> n >> x;
        vector<int> v(n);
        vector<int> diff(n-1);

        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }

        for (int k = 0; k < n-1; k++) {
            diff[k] = v[n-1-k] - v[n-2-k];
        }

        a = v[0];
        b = (x - v[n-1]) * 2;
        c = 0;
        if (!diff.empty()) c = *max_element(diff.begin(), diff.end());

        cout << max(a, max(b, c)) << endl;
    }
    return 0;
}