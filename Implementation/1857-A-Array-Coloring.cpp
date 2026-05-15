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
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x & 1)
            {
                odd++;
            }
        }
        if (odd & 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}