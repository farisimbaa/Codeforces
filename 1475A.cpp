#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    long long x;

    for (int i = 0; i < t; i++) {
        cin >> x;
        while(x % 2 == 0) {
            x /= 2;
        }
        if (x == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}