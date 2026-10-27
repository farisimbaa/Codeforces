#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    vector <int> v(3);

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[j];
        }
        if (v[2] > v[0]) cout << "+" << endl;
        else cout << "-" << endl;
    }
}