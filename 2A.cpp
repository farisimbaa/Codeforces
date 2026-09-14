#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >> n;
 
    vector<string> names(n);
    vector<int> points(n);

    unordered_map<string, int> scores;
 
    for (int i = 0; i < n; i++) {
        cin >> names[i] >> points[i];
        scores[names[i]] += points[i];
    }

    int highscore = -1;

    for (auto& [name, score] : scores) {
        highscore = max(highscore, score);
    }

    unordered_map<string, int> current;

    for (int i = 0; i < n; i++) {
        current[names[i]] += points[i];

        if (current[names[i]] >= highscore && scores[names[i]] == highscore) {
            cout << names[i] << endl;
            return 0;
        }
    }
}