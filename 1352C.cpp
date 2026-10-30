#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    long long n, k;
    int x;

    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        cout << k + ((k - 1) / (n - 1)) << endl;;
    }

    return 0;
}