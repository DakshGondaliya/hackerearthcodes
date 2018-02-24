#include <iostream>
using namespace std;
 
int main()
{
    int n, i, ans;
    long m;
    cin >> n >> m;
    long arr[n];
    for(i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==m)
        {
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
