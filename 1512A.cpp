#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n, common;

    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> v(n);

        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }

        if (v[0] == v[1] || v[0] == v[2]) common = v[0];
        else common = v[1];

        for (int j = 0; j < n; j++) {
            if (v[j] != common) {
                cout << j+1 << endl;
                break;
            }
        }
    }
    return 0;
}