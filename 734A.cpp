#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string input; cin >> input;

    int aCounter = 0, dCounter = 0;

    for (int i = 0; i < n; i++) {
        if (input[i] == 'A') {
            aCounter++;
        } else if (input[i] == 'D') {
            dCounter++;
        }
    }

    if (aCounter > dCounter) {
        cout << "Anton" << endl;
    } else if (dCounter > aCounter) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}