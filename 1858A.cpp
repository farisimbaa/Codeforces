#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int a, b, c;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        if (a > b) cout << "First" << endl;
        else if (b > a) cout << "Second" << endl;
        else if (c % 2 == 0) cout << "Second" << endl;
        else cout << "First" << endl;
    }

    return 0;
}