#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int a, b, c;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || b + c == a) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}