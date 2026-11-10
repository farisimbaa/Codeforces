#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    int x;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x + k <= 5) {
            count++;
        }
    }

    cout << count / 3 << "\n";
    return 0;
}