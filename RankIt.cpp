#include <bits/stdc++.h>
using namespace std;
 
int binarysearch(int low, int high, long a[], long x)
{
    while(low<=high)
    {
        int mid = low + high;
        mid /= 2;
        
        if(a[mid] < x)
        {
            low = mid + 1;
        }
        else if(a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
 
int main()
{
    int n, q;
    long x;
    cin >> n;
    long a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    n = sizeof(a)/sizeof(a[0]);
    sort(a, a+n);
    cin >> q;
    while(q--)
    {
        cin >> x;
        cout << binarysearch(0, n-1, a, x)+1 << "\n";
    }
    return 0;
}
