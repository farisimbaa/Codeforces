#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; cin >> input;
    bool allUpper = true;

    for (int i = 1; i < input.length(); i++) {
        if (islower(input[i])) {
            allUpper = false;
            break;
        }
    }

    if (allUpper) {
        if (isupper(input[0])) {
            input[0] = tolower(input[0]);
        } else {
            input[0] = toupper(input[0]);
        }
        
        for (int i = 1; i < input.length(); i++) {
            input[i] = tolower(input[i]);
        }
    }

    cout << input << endl;
    return 0;
}