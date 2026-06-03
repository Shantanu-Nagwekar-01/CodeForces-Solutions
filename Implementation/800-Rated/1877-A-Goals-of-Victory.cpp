#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, s = 0;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            s += x;
        }
        s *= -1;
        cout << s << endl;
    }
}