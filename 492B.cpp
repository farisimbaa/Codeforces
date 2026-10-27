#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l; cin >> n >> l;
    vector<int> s;
    int x;
    int output = 0;
    double distFirst, distEnd;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s.push_back(x);
    }

    sort(s.begin(), s.end());

    distFirst = s[0] - 0;
    distEnd = l - s[s.size() - 1]; 

    for (int i = 0; i < s.size() - 1; i++) {
        output = max(output, s[i+1] - s[i]);
    }

    cout << fixed << setprecision(10);
    cout << max((double) output / 2, max(distFirst, distEnd)) << endl;
    return 0;
}