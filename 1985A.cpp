#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string a, b;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        
        cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] << b[2] << endl;
    }

    return 0;
}