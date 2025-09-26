#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string name;
    int n; cin >> n;
    string ans[n];

    for (int i = 0; i < n; i++) {
        cin >> name;
        for (int i = 0; i < n; i++) {
            if (name == ans[i]) {
                //handle duplicate name
                break;
            } else {
                ans[i] = name;
                break;
            }
        }
    }
    return 0;
}