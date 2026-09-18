#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; cin >> input;

    vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};

    for (char c : input) {
        if (find(vowels.begin(), vowels.end(), c) != vowels.end()) {
            continue;
        } else {
            cout << "." << (char)tolower(c);
        }
    }
    cout << endl;
    return 0;
}