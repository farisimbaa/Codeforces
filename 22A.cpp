#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<int> numbers;

    cin >> n;
    numbers.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    numbers.erase(
        unique(numbers.begin(), numbers.end()), numbers.end()
    );

    if (numbers.size() > 1) {
        cout << numbers[1] << endl;
    } else {
        cout << "NO" << endl;
    }
}