#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, i = 1;
        cin >> n;
        while (n % i == 0)
        {
            i++;
        }
        cout << i - 1 << endl;
    }

    return 0;
}

//learning:
// if numbers in range [l,r] divides N
// then there exists a range [1, r -l + 1] which also divides N