#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int p, q; cin >> p >> q;
        if (p + 2 <= q) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}