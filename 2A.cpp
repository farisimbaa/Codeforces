#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >> n;
 
    int highscore = -1;
    string name, ans;
    unordered_map<string, int> scores;
    int score = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> name >> score;
 
        scores[name] += score;
        if (scores[name] > highscore) {
            highscore = scores[name];
            ans = name;
        }
    }
    cout << ans;
    return 0;
}