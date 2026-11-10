#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int k, num, count;

    for (int i = 0; i < t; i++) {
        num = 1;
        count = 0;
        cin >> k;

        while (count < k) {
            if (num % 3 != 0 && num % 10 != 3) {
                count++;
            }
            num++;
        }
        cout << num - 1 << endl;
    }
    
    return 0;
}