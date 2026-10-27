#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    int current = 1;
    long long count = 0;
    int x;

    for (int i = 0; i < m; i++) {
        cin >> x;
        if (x < current) {
            count += n - current + x;
            current = x;
        } else {
            count += x - current;
            current = x;  
        }
    }

    cout << count << endl;
}