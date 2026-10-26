#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int x; cin >> x;
    int min = x, max = x;
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        if (x < min) {
            min = x;
            count++;
        } else if (x > max) {
            max = x;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}