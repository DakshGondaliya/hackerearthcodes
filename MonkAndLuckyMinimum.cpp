#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        int min = a[0];
        for(int i=1;i<n;i++)
        {
            if(min > a[i])
            {
                min = a[i];
            }
        }
        
        int c=0;
        if(n>1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==min)
                {
                    c++;
                }
            }
            if(c%2==0)
            {
                cout<<"Unlucky"<<"\n";
            }
            else
            {
                cout<<"Lucky"<<"\n";
            }
        }
        
        else
        {
            cout<<"Lucky"<<"\n";
        }
    }
    return 0;
}
