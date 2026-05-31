#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int prev;
        cin >> prev;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int cur, res = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> cur;
            if ((prev & 1) == (cur & 1))
            {
                res++;
                prev *= cur;
            }
            else
            {
                prev = cur;
            }
        }
        cout << res << endl;
    }
}