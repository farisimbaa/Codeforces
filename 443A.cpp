#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin,input);

    set<char> letters;

    for (char c : input) {
        if (isalpha(c)) letters.insert(c);
    }

    cout << letters.size();
    return 0;
}