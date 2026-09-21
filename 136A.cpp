#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> answer(n+1);

    for (int i = 1; i <= n; i++) {
        int p; cin >> p;
        answer[p] = i;
    }

    for (int i = 1; i <=n; i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}