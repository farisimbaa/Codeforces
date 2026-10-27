#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int a, b, c;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        cout << (a+b+c) - min(a, min(b,c)) - max(a, max(b,c)) << endl;
    }
}