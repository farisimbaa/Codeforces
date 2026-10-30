#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector <int> v(n);
    int high = -1;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        high = max(high, v[i]);
    }

    for (int i = 0; i < n; i++) {
        count += high - v[i];
    }

    cout << count << endl;
    return 0;
}