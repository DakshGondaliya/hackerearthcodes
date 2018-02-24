#include <bits/stdc++.h>
using namespace std;
 
long modexp(long a, long b, long m)
{
    long result=1;
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
    long a, b;
    cin >> a >> b;
    long m = 1000000007;
    cout << modexp(a, b, m);
    return 0;
}
