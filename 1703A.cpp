#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string input;

    for (int i = 0; i < t; i++) {
        cin >> input;
        for (char &c : input) c = tolower(c);
        if (input == "yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}