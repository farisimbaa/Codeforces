#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    bool right = true;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int i = 1; i <= m; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (right)
            {
                for (int i = 1; i < m; i++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
                right = false;
            }
            else
            {
                cout << "#";
                for (int i = 1; i < m; i++)
                {
                    cout << ".";
                }
                cout << endl;
                right = true;
            }
        }
    }
}