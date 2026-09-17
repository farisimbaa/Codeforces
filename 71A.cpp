#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s.size() > 10) {
            string result = s[0] + to_string(s.size() - 2) + s[s.size() - 1];
            cout << result << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}