#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    int x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0,c1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=x)
        {
            c++;
        }
        else
        {
            c1++;
        }
        if(c1==2)
        {
            break;
        }
    }
    cout<<c;
    return 0;
}
