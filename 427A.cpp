#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int num = 0;
    int count = 0;
    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == -1) {
            if (num > 0) {
                num--;
            } else {
                count++;
            }
        } else {
            num += x;
        }
    }

    cout << count << endl;
    return 0;
}