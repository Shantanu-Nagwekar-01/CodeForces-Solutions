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
        int s = INT_MAX;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            s = min(s, a[i]);
        }
        if (mp.size() == 1)
        {
            cout << -1 << endl;
            continue;
        }
        int lb = mp[s];
        int lc = n - lb;
        cout << lb << " " << lc << endl;
        for (int i = 0; i < lb; i++)
        {
            cout << s << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != s)
            {
                cout << a[i] << " ";
            }
        }
    }
}