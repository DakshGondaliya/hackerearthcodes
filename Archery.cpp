#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      ll a[n];
      for(int i=1;i<=n;i++)
      {
          cin >> a[i];
      }
      ll ans = a[1];
      int g;
      for(int i=2;i<=n;i++)
      {
          g = __gcd(ans,a[i]);
          ans = (ans*a[i])/g;
      }
      cout << ans << "\n";
    }
    return 0;
}
