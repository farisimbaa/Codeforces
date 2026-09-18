#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x; cin >> x;

    if (x % 5 == 0) {
        cout << x / 5 << endl;
    } else {
        cout << (x / 5) + 1 << endl;
    }
}