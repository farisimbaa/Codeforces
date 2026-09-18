#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w; cin >> k >> n >> w;

    int total_cost = k * (w * (w + 1) / 2);
    int borrow = max(0, total_cost - n);
    cout << borrow << endl;
}