#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int prev = 0, curr, res = 0;
        // vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> curr;
            res = max(res, curr - prev);
            prev = curr;
        }
        res = max(res, (x - curr) * 2); // this is last dist btw gas st and x
        cout << res << endl;
    }
}