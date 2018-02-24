#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    long a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    long k;
    cin >> k;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
