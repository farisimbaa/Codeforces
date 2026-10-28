#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; cin >> n >> t;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int left = 0;
    int sum = 0;
    int count = 0;

    for (int right = 0; right < n; right++) {
        sum += v[right];

        while (sum > t) {
            sum -= v[left];
            left++;
        }

        count = max(count, right - left + 1);
    }
    cout << count << endl;
    return 0;
}