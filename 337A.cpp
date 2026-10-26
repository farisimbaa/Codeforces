#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> a(m);
    
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int min_diff = INT_MAX;
    for (int i = 0; i <= m - n; i++) {
        min_diff = min(min_diff, a[i + n - 1] - a[i]);
    }

    cout << min_diff << endl;
    return 0;
}