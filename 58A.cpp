#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; cin >> input;

    if (input.contains("hello")) {
        cout << "YES";
    } else cout << "NO";

    return 0;
}