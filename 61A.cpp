#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input1, input2;
    cin >> input1 >> input2;

    for (int i = 0; i < input1.size(); i++) {
        if (input1[i] == input2[i]) cout << "0";
        else cout << "1";
    }
    
    cout << endl;
    return 0;
}