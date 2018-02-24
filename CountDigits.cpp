#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int N = s.length();
    int a0=0, a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0;
    for(int i=0;i<N;i++)
    {
        if(s[i]=='0')
        {
            a0++;
        }
        else if(s[i]=='1')
        {
            a1++;
        }
        else if(s[i]=='2')
        {
            a2++;
        }
        else if(s[i]=='3')
        {
            a3++;
        }
        else if(s[i]=='4')
        {
            a4++;
        }
        else if(s[i]=='5')
        {
            a5++;
        }
        else if(s[i]=='6')
        {
            a6++;
        }
        else if(s[i]=='7')
        {
            a7++;
        }
        else if(s[i]=='8')
        {
            a8++;
        }
        else if(s[i]=='9')
        {
            a9++;
        }
    }
 
        cout << "0" << " " << a0 << "\n";
        cout << "1" << " " << a1 << "\n";
        cout << "2" << " " << a2 << "\n";
        cout << "3" << " " << a3 << "\n";
        cout << "4" << " " << a4 << "\n";
        cout << "5" << " " << a5 << "\n";
        cout << "6" << " " << a6 << "\n";
        cout << "7" << " " << a7 << "\n";
        cout << "8" << " " << a8 << "\n";
        cout << "9" << " " << a9 << "\n";
    return 0;
}
