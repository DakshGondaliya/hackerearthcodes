#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, i;
    cin >> n;
    vector<int> a(100000), b(100000);
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> b[i];
    }
    for(i=0;i<n;i++)
    {
        a[i] += b[i];
        cout << a[i] << " ";
    }
    return 0;
}
