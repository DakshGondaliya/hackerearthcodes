#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long a[n];
    long c=0,min=-1000000000;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            sum += a[i];
            c++;
        }
        
        if(a[i]<0 && a[i]>min)
        {
            min = a[i];
        }
    }
    
    if(c==0)
    {
        cout << min << " 1";
    }
    
    else
    {
        cout << sum << " " << c;
    } 
    return 0;
}
