#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    int j = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] < b[i])
        {
            j = 1;
            break;
        }
    }
    if(j==1)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    return 0;
}
Language: C++
