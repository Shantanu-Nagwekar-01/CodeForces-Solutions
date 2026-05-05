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
        int a;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                cin >> a;
            }
            else
            {
                int x;
                cin >> x;
            }
        }
        if (a == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}