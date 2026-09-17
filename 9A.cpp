#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int s1, s2;
    cin >> s1 >> s2;

    int n = 7 - max(s1, s2);

    if (n == 1) {
        cout << "1/6" << endl;
    } else if (n == 2) {
        cout << "1/3" << endl;
    } else if (n == 3) {
        cout << "1/2" << endl;
    } else if (n == 4) {
        cout << "2/3" << endl;
    } else if (n == 5) {
        cout << "5/6" << endl;
    } else if (n == 6) {
        cout << "1/1" << endl;
    }
    return 0;
}