#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long n;
    cin >> n;
    string s;
    cin >> s;
    int a[26]={0};
    for(long i=1;i<=n;i++)
    {
        int j = s[i];
        j = j-96;
        a[j]++;
    }
    int b[7];
    b[0] = a[1]/2;
    b[1] = a[3];
    b[2] = a[5]/2;
    b[3] = a[8]/2;
    b[4] = a[11];
    b[5] = a[18]/2;
    b[6] = a[20];
    
    int min = 100000;
    for(int i=0;i<7;i++)
    {
        if(min > b[i])
        {
            min = b[i];
        }
    }
    cout << min;
    return 0;
}
