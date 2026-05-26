#include <bits./stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 0;
        int y;
        // optimized approach
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> y;
            x ^= y;
        }
        if (n & 1)
        {
            cout << x << endl;
        }
        else
        {
            if (x == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        // vector<int> v(n);
        // for (int i = 0; i < n; i++)
        // {

        //     cin >> v[i];
        //     x ^= v[i];
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     y ^= (x ^ v[i]);
        // }
        // if (y == 0)
        // {
        //     cout << x << endl;
        // }
        // else
        // {
        //     cout << -1 << endl;
        // }
    }
}