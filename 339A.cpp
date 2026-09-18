#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; cin >> input;

    int ones, twos, threes;
    ones = twos = threes = 0;

    for (char c : input) {
        if (c == '1') ones++;
        else if (c == '2') twos++;
        else if (c == '3') threes++;
    }

    for (int i = 0; i < ones; i++) {
        cout << "1";
        if (i != ones - 1 || twos > 0 || threes > 0) cout << "+";
    }
    for (int i = 0; i < twos; i++) {
        cout << "2";
        if (i != twos - 1 || threes > 0) cout << "+";
    }
    for (int i = 0; i < threes; i++) {
        cout << "3";
        if (i != threes - 1) cout << "+";
    }
    cout << endl;
}