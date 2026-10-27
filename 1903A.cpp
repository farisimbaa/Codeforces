#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n, k;

    for (int i = 0; i < t; i++) {
        cin >> n >> k;

        vector<int> v1(n);

        for (int j = 0; j < n; j++) {
            cin >> v1[j];
        }

        vector <int> v2 = v1;
        sort(v2.begin(), v2.end());
        
        if (k <= 1) {
            if (v1 == v2) {
                cout << "YES" << endl;
            } else cout << "NO" << endl;
            
        }
        else cout << "YES" << endl;
    }
    return 0;
}