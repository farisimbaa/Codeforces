#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int s = 0, d = 0;
    int left, right;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    left = 0;
    right = n-1;

    while (left <= right) {
        if (v[left] >= v[right]) {
            s += v[left];
            left++;
        } else {
            s += v[right];
            right--;
        }

        if (left > right) break;

        if (v[left] >= v[right]) {
            d += v[left];
            left++;
        } else {
            d += v[right];
            right--;
        }
    }

    cout << s << " " << d << "\n";
}