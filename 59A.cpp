#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int upperCount, lowerCount;
    upperCount = lowerCount = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            upperCount++;
        } else {
            lowerCount++;
        }
    }

    if (upperCount > lowerCount) {
        for (int i = 0; i < s.size(); i++) {
            cout << (char)toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            cout << (char)tolower(s[i]);
        }
    }
    cout << endl;
}