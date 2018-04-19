#include <bits/stdc++.h>
using namespace std;
 
void insertionsort(int a[], int n)
{
    for(int i=1;i<=n;i++)
    {
        int temp = a[i];
        int j = i;
        
        while(j>1 && temp<a[j-1])
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
    }
}
 
int binarysearch(int low, int high, int key,int b[])
{
    while(low<=high)
    {
       int mid = (low+high)/2;
        if(b[mid]<key)
         {
           low = mid +1;  
         }
       else if(b[mid]>key)
         {
           high=mid-1;
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
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
   
    insertionsort(a, n);
    for(int i=1;i<=n;i++)
    {
        cout << binarysearch(1,n,b[i],a) << " ";
    }
    return 0;
}
