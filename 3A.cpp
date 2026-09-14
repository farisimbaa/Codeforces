#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string start, end;
    cin >> start >> end;

    int dx = abs(start[0] - end[0]);
    int dy = abs(start[1] - end[1]);

    cout << max(dx,dy) << endl;

    string horizontal;
    if (start[0] < end [0]) horizontal = "R";
    else if (start[0] > end[0]) horizontal = "L";

    string vertical;
    if (start[1] < end[1]) vertical = "U";
    else if (start[1] > end[1]) vertical = "D";

    while (dx > 0 && dy > 0) {
        cout << horizontal + vertical << endl;
        dx--;
        dy--;
    }

    while (dx > 0) {
        cout << horizontal << endl;
        dx--;
    }

    while (dy > 0) {
        cout << vertical << endl;
        dy--;
    }

    return 0;
}