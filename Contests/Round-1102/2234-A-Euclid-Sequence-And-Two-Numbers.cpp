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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (n == 2)
        {
            if (b[0] < b[1])
            {
                swap(b[0], b[1]);
            }
            cout << b[0] << " " << b[1] << endl;
            continue;
        }
        sort(b.rbegin(), b.rend());
        int p = 2;
        bool valid = true;
        while (p < n)
        {
            if (b[p] != (b[p - 2] % b[p - 1]))
            {
                valid = false;
                break;
            }
            p++;
        }
        if (valid)
        {
            cout << b[0] << " " << b[1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}