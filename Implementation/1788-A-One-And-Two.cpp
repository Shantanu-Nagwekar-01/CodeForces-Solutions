#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long m = 0LL;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                m++;
            }
        }
        if (m & 1)
        {
            cout << -1 << endl;
            continue;
        }
        long long res = 0, k = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                res++;
            }
            if (res == (m - res))
            {
                k = i + 1;
                break;
            }
        }
        cout << k << endl;
    }
}