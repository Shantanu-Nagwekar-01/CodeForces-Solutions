#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == c && b == d)
        {
            cout << 0 << endl;
            continue;
        }
        if (d < b)
        {
            cout << -1 << endl;
            continue;
        }
        if (a + d - b < c)
        {
            cout << -1 << endl;
            continue;
        }
        if (a + d - b == c)
        {
            cout << d - b << endl;
            continue;
        }
        if (a + d - b > c)
        {
            cout << d - b + abs((a + d - b) - c) << endl;
            continue;
        }
    }
}