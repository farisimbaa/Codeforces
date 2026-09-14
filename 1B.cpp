#include <bits/stdc++.h>
using namespace std;

bool isRXCY(string s) {
    if (s[0] != 'R')
        return false;

    int i = 1;

    if (!isdigit(s[i]))
        return false;

    while (i < s.size() && isdigit(s[i]))
        i++;

    if (i >= s.size() || s[i] != 'C')
        return false;

    if (i + 1 >= s.size() || !isdigit(s[i + 1]))
        return false;

    return true;
}

string toRXCY(string s) {
    int c = 0;
    int i = 0;
    while (isalpha(s[i])) {
        c = c * 26 + (s[i] - 'A' + 1);
        i++;
    }

    int r = 0;
    while (i < s.size()) {
        r = r * 10 + (s[i] - '0');
        i++;
    }

    return "R" + to_string(r) + "C" + to_string(c);
}

string toExcel(string s) {
    stringstream ss(s);

    char R, C;
    int r, c;
    ss >> R >> r >> C >> c;

    string ans;
    
    while (c > 0) {
        c--;
        ans += (char)('A' + (c % 26));
        c /= 26;
    }

    reverse(ans.begin(), ans.end());
    return ans + to_string(r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (isRXCY(s)) {
            cout << toExcel(s) << endl;
        } else {
            cout << toRXCY(s) << endl;
        }
    }
}