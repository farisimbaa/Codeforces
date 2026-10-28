#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (b / m >= a) {
        cout << n * a << endl;
    } else if (m > n) {
        cout << min(n * a, b) << endl;
    } else {
        cout << min(((n / m) + 1) * b, min(((n / m) * b) + ((n % m) * a), ((n / m) * b) + ((n % m) * b))) << endl;
    }

    return 0;
}