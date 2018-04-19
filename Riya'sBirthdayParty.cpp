#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long m = 1000000007;
        long ans;
        ans = (((2 * (n%m) * (n%m))%m) - n%m + m)%m;
        cout << ans << "\n";
    }
    return 0;
}
