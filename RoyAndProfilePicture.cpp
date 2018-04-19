#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int l, n, w, h;
    cin >> l;
    cin >> n;
    while(n--)
    {
        cin >> w >> h;
        string A;
        if(w<l || h<l)
        {
            A = "UPLOAD ANOTHER";
        }
        else if(w>=l && h>=l)
        {
            if(w==h)
            {
                A = "ACCEPTED";
            }
            else
            {
                A = "CROP IT";
            }
        }
         cout << A << "\n";
    }
    return 0;
}
