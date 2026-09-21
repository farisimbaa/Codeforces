#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    set<int> a;

    int p; cin >> p;
    int x;

    for (int i = 0; i < p; i++) {
        cin >> x;
        a.insert(x);
    }

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        a.insert(x);
    }

    if (a.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    
    return 0;
}