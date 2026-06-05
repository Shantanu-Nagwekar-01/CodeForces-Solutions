#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        // in a palindrome odd occurances must be atmost 1
        // so when we remove k from x odd occurances, total odd occurances must be less than equal to 1
        // x - k <= 1 ->  x <= k + 1
        int c[26] = {0};
        for (char ch : s)
        {
            c[ch - 'a']++;
        }
        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (c[i] & 1)
            {
                odd++;
            }
        }
        if (odd <= k + 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}