#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> numbers(n);
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        total += numbers[i];
    }

    sort(numbers.rbegin(), numbers.rend());

    int sum, count;
    sum = count = 0;

    for (int number : numbers) {
        sum += number;
        count++;

        if (sum > total - sum) {
            cout << count << endl;
            return 0;
        }
    }
}