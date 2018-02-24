#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char a[100000];
        int count = 0;
        cin >> a;
        int n = strlen(a);
        for(int i=0;i<n;i++)
        {
            if(a[i]=='A' || a[i]=='a' || a[i]=='E' || a[i]=='e' || a[i]=='I' || a[i]=='i' || a[i]=='O' || a[i]=='o' || a[i]=='U' || a[i]=='u')
            {
               count++; 
            }
        }
        cout << count << "\n";
    }
    return 0;
}
