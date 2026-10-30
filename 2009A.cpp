#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int a, b;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << b - a << endl;
    }
    
    return 0;
}