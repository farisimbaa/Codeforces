#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int x;
    int count = 0;
    int last = 0;
    int high = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x >= last) {
            count++;
            if (count > high) high = count; 
        } else {
            count = 1;  
        }
        last = x;
    }
    cout << high << endl;
}