#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int count = 1;
    int input1, input2;
    cin >> input1;

    for (int i = 0; i < n-1; i++) {
        cin >> input2;
        if (input1 != input2) {
            count++;
        }
        input1 = input2;
    }

    cout << count;
    return 0;
}