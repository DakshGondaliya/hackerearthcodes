#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n];
    long product=1;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++)
    {
        product = (product*a[i])%1000000007;
    }
    product %= 1000000007;
    cout << product;
      return 0;
}
