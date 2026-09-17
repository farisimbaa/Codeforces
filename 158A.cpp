#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;

    vector<int> scores;
    for (int i = 0; i < n; i++) {
        int score; cin >> score;
        scores.push_back(score);
        }

    int counter = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= scores[k-1] && scores[i] > 0) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}