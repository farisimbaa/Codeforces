#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_set<int> numbers(4);
    int n;

    for (int i = 0; i < 4; i++) {
        cin >> n;
        numbers.insert(n);
    }

    cout << 4 - numbers.size() << endl;
}