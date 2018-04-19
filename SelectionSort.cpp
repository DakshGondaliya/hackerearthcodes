#include <bits/stdc++.h>
using namespace std;
 
void selectionsort(int a[], int n, int x)
{
    int temp;
    int i;
    for(i=0;i<x;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[min])
            {
               min = j;
            }
        }
       temp = a[min];
       a[min] = a[i];
       a[i] = temp;
    }
    for(int k=0;k<n;k++)
    {
        cout << a[k] << " ";
    }
}
 
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
     selectionsort(a, n, x);
    return 0;
}
