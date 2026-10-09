#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    string ans = "";
    bool needSpace = false;

    for (int i = 0; i < s.length();) {
        if (s.substr(i, 3) == "WUB") {
            i += 3;
            needSpace = true;
        } else {
            if (needSpace && !ans.empty()) {
                ans += ' ';
            }
            ans += s[i];
            i++;
            needSpace = false;
        }
    }
    cout << ans << endl;
}