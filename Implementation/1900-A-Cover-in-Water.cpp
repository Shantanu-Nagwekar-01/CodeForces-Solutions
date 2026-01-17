#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int l = 0;
        int total = 0;
        for (char c : s)
        {
            if (c == '.')
            {
                total++;
            }
        }
        if (total == 0)
        {
            cout << 0 << endl;
            continue;
        }
        bool threedots = false;
        for (int r = 2; r < n; r++)
        {
            int dot = 0;
            for (int i = l; i <= r; i++)
            {
                if (s[i] == '.')
                {
                    dot++;
                    if (dot == 3)
                    {
                        threedots = true;
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            if (threedots)
            {
                break;
            }
            l++;
        }
        if (threedots)
        {
            cout << 2 << endl;
            continue;
        }
        else
        {
            cout << total << endl;
        }
    }
}