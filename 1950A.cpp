#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int a, b, c;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;

        if (a == b || b == c) {
            cout << "NONE" << endl;
            continue;
        }

        if (min(a, b) == a) {
            if (max(b, c) == c) cout << "STAIR" << endl;
            else cout << "PEAK" << endl;
        } else cout << "NONE" << endl;
    }
    return 0;
}