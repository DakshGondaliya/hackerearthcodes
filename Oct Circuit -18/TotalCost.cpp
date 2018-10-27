#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, s, t, h, x;
    cin >> p >> s >> t >> h >> x;
    
    long ans;
    int d = s-t;
    if(d>=x)
    {
        ans = p*x;
    }
    else
    {
        ans = p*d + (x-d)*h;
    }
    cout << ans;
    return 0;
}
