#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int ans = 0;
    int ones = 0, twos = 0, threes = 0, fours = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 1) ones++;
        else if (x == 2) twos++;
        else if (x == 3) threes++;
        else fours++;
    }

    ans += fours;
    if (threes > ones) {
        ans += threes;
        ones = 0;
    } else {
        ans += threes;
        ones = max(0, ones - threes);
    }

    if (twos % 2 == 0) {
        ans += twos / 2;
    } else {
        ans += twos / 2;
        ans++;
        ones = max(0, ones - 2);
    }

    if (ones > 0) {
        ans += (ones + 3) / 4;
    }
    cout << ans << endl;
}