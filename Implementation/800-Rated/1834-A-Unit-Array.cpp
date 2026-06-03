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
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        int res = 0;
        while ((a < b) || (b & 1))
        {
            res++;
            a++;
            b--;
        }
        cout << res << endl;
    }
}