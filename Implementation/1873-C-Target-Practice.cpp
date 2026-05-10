#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int res = 0;
        vector<vector<char>> a(10, vector<char>(10));
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int l = 0; l < 5; l++)
        {
            int top = l;
            int bottom = 9 - l;
            int left = l;
            int right = 9 - l;
            for (int i = left; i <= right; i++)
            {
                if (a[top][i] == 'X')
                {
                    res = res + l + 1;
                }
            }
            for (int i = top + 1; i < bottom; i++)
            {
                if (a[i][right] == 'X')
                {
                    res = res + l + 1;
                }
            }
            for (int i = right; i >= left; i--)
            {
                if (a[bottom][i] == 'X')
                {
                    res = res + l + 1;
                }
            }
            for (int i = bottom - 1; i > top; i--)
            {
                if (a[i][left] == 'X')
                {
                    res = res + l + 1;
                }
            }
        }
        cout << res << endl;
    }
}