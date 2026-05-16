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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool valid = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                valid = false;
                break;
            }
        }
        if (!valid)
        {
            cout << 0 << endl;
        }
        else
        {
            int mn = INT_MAX;
            for (int i = 0; i < n - 1; i++)
            {
                mn = min(mn, abs(a[i] - a[i + 1]));
            }
            int res = max(1, (mn / 2) + 1);
            cout << res << endl;
        }
    }
}