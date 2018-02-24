#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long n;
    int q;
    cin >> n >> q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    while(q--)
    {
        int b[3];
        long sum = 0;
        for(int i=0;i<3;i++)
        {
            cin >> b[i];
        }
        if(b[0]==1)
        {
            a[b[1]] = b[2];
        }
        else if(b[0]==2)
        {
            for(int i=b[1];i<=b[2];i++)
            {
                sum += a[i];
            }
             cout << sum << "\n";
        }
    }
    return 0;
}
