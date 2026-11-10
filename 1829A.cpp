#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string s;
    string cf = "codeforces";

    for (int i = 0; i < t; i++) {
        cin >> s;
        int count = 0;

        for (int j = 0; j < s.length(); j++) {
            if (s[j] != cf[j]) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}