#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string text; cin >> text;

    bool found[26] = {};

    for (char c : text) {
        c = tolower(c);
        found[c-'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!found[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}