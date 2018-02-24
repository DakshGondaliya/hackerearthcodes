#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int b=0;
    sort(a.begin(), a.end());
    for(int i=1;i<n;i++)
    {
        int diff = a[i] - a[i-1];
        if(diff!=1 && diff!=0)
        {
            b = 1;
            break;
        }
    }
    if(b==1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
