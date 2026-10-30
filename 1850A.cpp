#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int a, b, c;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        if (max(a, b) + max(min(a, b), c) >= 10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}