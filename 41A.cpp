#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<char> st;
    string input1, input2;
    cin >> input1 >> input2;

    if (input1.size() != input2.size()) {
        cout << "NO" << endl;
        return 0;
    }

    for (char c : input1) {
            st.push(c);
        }

    for (int i = 0; i < input2.size(); i++) {
        if (input2[i] != st.top()) {
            cout << "NO" << endl;
            return 0;
        } else {
            st.pop();
        }
    }
    cout << "YES" << endl;
    return 0;
}