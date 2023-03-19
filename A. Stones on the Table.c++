#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    string m;
    cin >> n;
    
    
        cin >> m;
    for (int i = 0; i < (n - 1); i++)
    {
            if (m[i] == m[i+1])
            {
                count++;
            }
    }
    cout << count;
}