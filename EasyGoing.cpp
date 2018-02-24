#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        long max = 0;
        long min = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n-m;i++)
        {
            min += a[i];
        }
        for(int i=m;i<n;i++)
        {
            max += a[i];
        }
        long ans = max-min;
        cout << ans << "\n";
    }
    return 0;
}
