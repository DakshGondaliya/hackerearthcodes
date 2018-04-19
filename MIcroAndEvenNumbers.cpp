#include <bits/stdc++.h>
using namespace std;
 
long Fact(int n)
{
    long fact=1;
    for(int i=n;i>=1;i--)
    {
     fact=fact*i;   
    }
    return fact;
}
 
long ncr(int n,int r)
{
  long NcR=Fact(n)/(Fact(n-r)*Fact(r));
    return NcR;
}
 
int main()
{
    int n, k, c=0;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
    }
    cout  << ncr(c, k);
    return 0;
}
