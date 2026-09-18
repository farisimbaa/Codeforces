#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; cin >> input;

    int streak = 1;

    for (int i = 0; i < input.size() - 1; i++) {
        if (input[i] == input[i + 1]) {
            streak++;
            if (streak >= 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            streak = 1;
        }
        }
    cout << "NO" << endl;
}