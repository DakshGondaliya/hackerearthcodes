#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int a[t];
    for(int i=1;i<=t;i++)
    {
        cin >> a[i];
    }
    long q;
    cin >> q;
    while(q--)
    {
        long sum=0;
        long tar;
        cin >> tar;
        for(int i=1;i<=t;i++)
        {
            sum += a[i];
            if(sum >= tar)
            {
               cout << i << "\n";
               break;
            }
        }
        if(tar > sum)
        {
            cout << "-1" << "\n";
        }
    }
    return 0;
}
