#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long k;
        cin >> n >> k;
        long a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        long min=1000000;
        for(int i=0;i<n;i++)
        {
            if(min > a[i])
            {
                min = a[i];
            }
        }
        long ans;
        if(k>min)
        {
         ans = k-min;
        }
        else
        {
            ans = 0;
        }
        cout << ans << "\n";
    }
    return 0;
}
Language: C++
