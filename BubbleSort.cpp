#include <bits/stdc++.h>
using namespace std;
 
int bubblesort(int a[], int n)
{
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            int temp;
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                count++;
            }
        }
    }
    return count;
}
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int result = bubblesort(arr, n);
    cout << result;
    return 0;
}
 
