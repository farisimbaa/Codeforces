#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    double a, b, count;

    for (int i = 0; i < t; i++) {
        count = 0;
        cin >> a >> b;
        if (a != b) {
            count = ceil(abs(a - b) / 10.0);
        }
        cout << int(count) << endl;
    }
    return 0;
}