#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pos, value;
    cin >> pos >> value;
    for (int i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = value;
    for (int i = 0; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}