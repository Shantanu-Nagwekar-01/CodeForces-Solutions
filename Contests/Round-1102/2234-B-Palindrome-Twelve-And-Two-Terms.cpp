#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 12 == 0)
        {
            cout << 0 << " " << n / 12 << endl;
            continue;
        }
        if (n % 12 < 10)
        {
            cout << n % 12 << " " << n - (n % 12) << endl;
            continue;
        }

        // 0, 12, ...... n
        //  a + 12x = n
        //  a = n - 12x
        //
    }
}