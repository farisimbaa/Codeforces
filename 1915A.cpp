#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int a,b,c;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;

        if (a == b) cout << c << endl;
        else if (a == c) cout << b << endl;
        else cout << a << endl;
    }
    return 0;
}