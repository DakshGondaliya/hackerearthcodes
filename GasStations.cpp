#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, i;
    long x;
    cin >> n >> x;
    long a[n];
    for(i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    long sum=0;
    for(i=1;i<=n;i++)
    {
        sum += a[i];
        if(sum>=x)
        {
            cout << i ;
            break;
        }
    }
    return 0;
