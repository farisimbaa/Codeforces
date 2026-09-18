#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;

    cin >> n >> s;

    int red, green, blue, ans;
    red = green = blue = ans = 0;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            ans++;
        } 
    }
    cout << ans << endl;
}