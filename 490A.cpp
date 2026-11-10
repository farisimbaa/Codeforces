#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n;
    int count1 = 0, count2 = 0, count3 = 0;
    vector<int> team1, team2, team3;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) {
            count1++;
            team1.push_back(i + 1);
        } else if (x == 2) {
            count2++;
            team2.push_back(i + 1);
        } else {
            count3++;
            team3.push_back(i + 1);
        }
    }

    int teams = min({count1, count2, count3});
    cout << teams << endl;

    for (int i = 0; i < teams; i++) {
        cout << team1[i] << " " << team2[i] << " " << team3[i] << endl;
    }
    return 0;
}