#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n; cin >> m >> n;

    if (m < 2 && n < 2) {
        cout << 0 << endl;
        return 0;
    }
    cout << (m * n) / 2 << endl;
    return 0;
}