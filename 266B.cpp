#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; cin >> n >> t;

    string input; cin >> input;

    while (t--) {
        for (int i = 0; i < n-1; i++) {
            if (input[i] == 'B' && input[i+1] == 'G') {
                swap(input[i], input[i+1]);
                i++;
            }
        }
    }

    cout << input << endl;
    return 0;
}