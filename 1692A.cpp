#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int x, y, count;

    for (int i = 0; i < t; i++) {
        count = 0;
        cin >> x;
        for (int j = 0; j < 3; j++) {
            cin >> y;
            if (y > x) count++;
        }
        cout << count << endl;
    }
}