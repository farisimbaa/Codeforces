#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n, left, right;
    string s;

    for (int i = 0; i < t; i++) {
        cin >> n >> s;
        left = 0;
        right = n - 1;
        while (s[left] != s[right] && left < right) {
            left++;
            right--;
        }
        cout << right - left + 1 << endl;
    }
    return 0;
}