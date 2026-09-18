#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; cin >> input;

    int counter = 0;
    
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '4' || input[i] == '7') {
            counter++;
        }
    }

    if (counter == 4 || counter == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}