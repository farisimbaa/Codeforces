#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string x;
    int front, back, len;

    for (int i = 0; i < t; i++) {
        cin >> x;

        len = x.length();
        front = x[0] + x[1] + x[2];
        back = x[len - 1] + x[len - 2] + x[len - 3];

        if (front == back) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}