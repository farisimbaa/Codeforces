#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int x, div;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x >= 1900) div = 1;
        else if (x >= 1600) div = 2;
        else if (x >= 1400) div = 3;
        else div = 4;

        cout << "Division " << div << endl;
    }

    return 0;
}