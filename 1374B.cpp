#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n, count2, count3;

    for (int i = 0; i < t; i++) {
        cin >> n;
        count2 = 0;
        count3 = 0;

        while (n % 2 == 0) {
            n /= 2;
            count2++;
        }

        while (n % 3 == 0) {
            n /= 3;
            count3++;
        }

        if (n != 1 || count2 > count3) {
            cout << -1 << endl;
        } else cout << count3 + (count3 - count2) << endl;
    }
    return 0;
}