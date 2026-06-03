#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int x = 1e6;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x = min(x, abs(a));
    }
    cout << x << endl;
}
