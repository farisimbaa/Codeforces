#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(3);

    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    vector<int> dp(n+1, -1);
    dp[0] = 0;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= v[j]) {
                if (dp[i - v[j]] != -1) {
                    dp[i] = max(dp[i], dp[i - v[j]] + 1);
                }
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}