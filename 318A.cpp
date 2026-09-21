#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k; cin >> n >> k;

    long long numberOfOdds = (n + 1) / 2;

    if (k <= numberOfOdds) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - numberOfOdds) << endl;
    }

    return 0;
}