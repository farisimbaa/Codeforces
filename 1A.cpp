#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a; cin >> n >> m >> a;

    long long ans;

    if (a == 1) {
        ans = n * m;
    } else if (n == m && m == a) {
        ans = 1;
    } else if (n == a) {
        ans = m;
    } else if (m == a) {
        ans = n;
    } else if (n * m <= (a * a)) {
        ans = 1;
    } else {
        // Ceiling division = (n + d - 1) / d
        ans = ((n + a - 1) / a) * ((m + a - 1) / a);
    }

    cout << ans << endl;
    return 0;
}