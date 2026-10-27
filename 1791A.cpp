#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    char x;
    string text = "codeforces";

    for (int i = 0; i < t; i++) {
        cin >> x;
        if (text.find(x) != string::npos) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}