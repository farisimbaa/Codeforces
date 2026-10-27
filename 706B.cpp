#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, m;
    cin >> n;
    vector <int> x(n);
    int count;

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> m;
        count = upper_bound(x.begin(), x.end(), m) - x.begin();
        cout << count << endl;
    }

    return 0;
}