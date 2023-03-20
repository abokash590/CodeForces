#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, c, d;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] < 97)
        {
            c.push_back(a[i] + 32);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    for (int i = 0; i < c.length(); i++)
    {
        if (!(c[i] == 97 || c[i] == 101 || c[i] == 105 || c[i] == 111 || c[i] == 117 || c[i] == 121))
        {
            d.push_back('.');
            d.push_back(c[i]);
        }
    }
    cout << d;
}