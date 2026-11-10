#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_map<string, int> freq;

    for (const auto& str : v) {
        freq[str]++;
    }

    int max_freq = 0;
    string most_frequent;

    for (const auto& [str, count] : freq) {
        if (count > max_freq) {
            max_freq = count;
            most_frequent = str;
        }
    }

    cout << most_frequent << endl;

    return 0;
}