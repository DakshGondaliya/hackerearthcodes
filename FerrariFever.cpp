#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n, x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n];
        int sum=0;
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%x==0)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }
    }
    return 0;
}
