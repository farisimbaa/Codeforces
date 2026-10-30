#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    if (min(m, n) % 2 == 1) {
        cout << "Akshat" << endl;
    } else cout << "Malvika" << endl;

    return 0;
}