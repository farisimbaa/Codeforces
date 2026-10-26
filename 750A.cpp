#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    int time = 240 - k;
    int count = 0;

    for (int i = 0; i < n; i++) {
        time -= (i + 1) * 5;
        if (time >= 0) count++;
        else break;
    }

    cout << count << endl;
    return 0;
}