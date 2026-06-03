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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mp[a]++;
        }
        if (mp.size() == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        else if (mp.size() == 2)
        {
            int f1 = mp.begin()->second;
            int f2 = (++mp.begin())->second;
            if (f1 == f2)
            {
                cout << "Yes" << endl;
            }
            else if ((n & 1) && (abs(f1 - f2) == 1))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else if (mp.size() >= 3)
        {
            cout << "No" << endl;
        }
    }
}
