#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string ans;
    int input; cin >> input;
    if (input % 2 == 0 && input != 2) ans = "YES";
    else ans = "NO";
 
    cout << ans << endl;
    return 0;
}