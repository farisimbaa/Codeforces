#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n;
    string s;
    string target = "Timur";
    sort(target.begin(), target.end());

    for (int i = 0; i < t; i++) {
        cin >> n >> s;
        if (n != 5) cout << "NO" << endl;
        else {
            sort(s.begin(), s.end());
            if (s == target) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}