#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(1e6, 0);
    for (int i = 1; i < 1000000; i++)
    {
        int digits = 0;
        int num = i;
        while (num)
        {
            if (num % 10)
            {
                digits++;
            }
            num /= 10;
        }
        if (digits == 1)
        {
            a[i] = 1;
        }
        a[i] += a[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int res = 0;

        cout << a[n] << endl;

        // if (n <= 10) {
        //     res += n;
        // }
        // if (n > 10 && n <= 100) {
        //     res += (9 + (n / 10));
        // }
        // if (n > 100 && n < 1000) {
        //     res +=
        // }
    }
}