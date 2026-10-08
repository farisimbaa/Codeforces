#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n;

    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n < 3) cout << 0 << endl;
        else if (n % 2 == 0) cout << (n / 2) - 1 << endl;
        else cout << n / 2 << endl;
    }

    return 0;
}