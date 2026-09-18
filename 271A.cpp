#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int y; cin >> y;
    int x = y + 1;

    while (true) {
        int a = x / 1000;
        int b = (x / 100) % 10;
        int c = (x / 10) % 10;
        int d = x % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << x << endl;
            return 0;
        }
        x++;
    }
}