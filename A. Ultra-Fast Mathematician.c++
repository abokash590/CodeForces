#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, i, j, count = 0;
    cin >> n >> h;
    j = n - 1;
    int a[j];
    for (i = 0; i <= j; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i <= j; i++)
    {
        if (a[i] <= h)
        {
            count++;
        }
        else
        {
            count += 2
        }
    }
    cout << count;
}