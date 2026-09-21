#include <bits/stdc++.h>
using namespace std;

bool isLucky(int x) {
    while (x > 0) {
        int digit = x % 10;

        if (digit != 4 && digit != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}