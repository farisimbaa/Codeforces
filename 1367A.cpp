#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string s;
    string ans;

    for (int i = 0; i < t; i++) {
        cin >> s;

        for (int j = 2; j < s.size() - 1; j += 2) {
            ans += s[j];
        }

        cout << s[0] << ans << s[s.size() - 1] << "\n";
        ans = "";
    }
}