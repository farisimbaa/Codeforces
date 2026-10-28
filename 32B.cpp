#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            if (s[i] == '.') cout << 1;
            else cout << 2;
        } else cout << 0;
    }
    cout << endl;
    return 0;
}