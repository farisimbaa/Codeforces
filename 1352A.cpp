#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> ans;
        int place = 1;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                ans.push_back(digit * place);
            }

            n /= 10;
            place *= 10;
        }

        cout << ans.size();

        for (int x : ans) {
            cout << " " << x;
        }

        cout << "\n";
    }
    return 0;
}