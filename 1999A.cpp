#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int x, out;

    for (int i = 0; i < t; i++) {
        cin >> x;
        out = (x / 10) + (x % 10);
        cout << out << endl;
    }
    return 0;
}