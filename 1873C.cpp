#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int score;
    char x;

    for (int i = 0; i < t; i++) {
        score = 0;

        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                cin >> x;
                if (x == 'X') {
                    score += min({j, k, 9-j, 9-k}) + 1;
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}