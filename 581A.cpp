#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    int count1 = 0, count2 = 0;

    while (a + b >= 2) {
        if (a > 0 && b > 0) {
            count1++;
            a--;
            b--;
        } else if (a > 1) {
            count2++;
            a = a-2;
        }else if (b > 1) {
            count2++;
            b = b-2;
        }
    }
    cout << count1 << " " << count2 << endl;
    return 0;
}