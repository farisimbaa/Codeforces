#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    double input;
    double out = 0;

    for (int i = 0; i < n; i ++) {
        cin >> input;
        out += input / 100;
    }

    cout << (out / n) * 100 << endl;
    return 0;
}