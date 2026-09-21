#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> a(n);

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > a[maxIndex]) maxIndex = i;
        if (a[i] <= a[minIndex]) minIndex = i;
    }

    int answer = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex) answer--;

    cout << answer << endl;
    return 0;
}