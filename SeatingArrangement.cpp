#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int m = n%6;
        int N = n/6;
        string A;
        switch(m)
        {
            case 0:
            A = "WS";
            if(N%2==0)
             n -= 11;
             else
             n +=1;
             break;
             
            case 1:
            A = "WS";
            if(N%2==0)
             n += 11;
             else
             n -=1;
             break;
             
            case 2:
            A = "MS";
            if(N%2==0)
             n += 9;
             else
             n -= 3;
             break;
             
            case 3:
            A = "AS";
            if(N%2==0)
             n += 7;
             else
             n -= 5;
             break;
             
            case 4:
            A = "AS";
            if(N%2==0)
             n += 5;
             else
             n -= 7;
             break;
             
            case 5:
            A = "MS";
            if(N%2==0)
             n += 3;
             else
             n -= 9;
             break;
        }
        cout << n << " " << A << "\n";
    }
    return 0;
}
