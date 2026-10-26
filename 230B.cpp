#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long x;
    long long root;
    bool isPrime;

    for (int i = 0; i < n; i++) {
        cin >> x;
        isPrime = true;
        if (x == 1) {
            cout << "NO" << endl;
            continue;
        }

        root = sqrt(x);
        if (root * root != x) {
            cout << "NO" << endl;
            continue;
        } else {
            for (int i = 2; i * i <= root; i++) {
                if (root % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}