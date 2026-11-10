#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int m, c;
    int countm = 0, countc = 0;

    for (int i = 0; i < n; i++) {
        cin >> m >> c;
        if (m > c) {
            countm++;
        } else if (c > m) {
            countc++;
        }
    }

    if (countm > countc) {
        cout << "Mishka" << endl;
    } else if (countc > countm) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
}