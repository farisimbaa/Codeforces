#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string s;

    for (int i = 0; i < t; i++) {
        cin >> s;

        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}