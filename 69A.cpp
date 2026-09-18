#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int xCount, yCount, zCount;
    xCount = yCount = zCount = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        xCount += x;
        yCount += y;
        zCount += z;
    }

    if (xCount == 0 && yCount == 0 && zCount == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}