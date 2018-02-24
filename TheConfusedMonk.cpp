#include <bits/stdc++.h>
using namespace std;
 
long modexp(long a, long b, long m)
{
    int result = 1;
    while(b>0)
    {
        if(b%2==1)
        {
            result = (result*a)%m;
        }
        a = (a*a)%m;
        b = b/2;
    }
    return result;
}
 
int main()
{
    int n;
    cin >> n;
    long a[n];
    long m = 1000000007;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    long G = a[0];
    for(int i=1;i<n;i++)
    {
       G = __gcd(G, a[i]); 
    }
    long long ans = 1;
    for(int i=0;i<n;i++)
    {
       ans = (ans*modexp(a[i],G,m))%m;
    }
    cout << ans;
    return 0;
}
