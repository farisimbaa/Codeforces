#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >> n;
    unordered_map<string, int> count;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        if (count[name] == 0) {
            cout << "OK" << endl;
            count[name] = 1;
        } else {
            cout << name << count[name] << endl;
            count[name]++;
        }
    }
    return 0;
}