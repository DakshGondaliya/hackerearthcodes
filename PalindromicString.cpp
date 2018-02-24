#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int i, j;
    bool a = false;
    int l = s.length();
    
    for(i=0;i<l/2;i++)
    {
        if(s[i] != s[l-i-1])
        {
            a = true;
            break;
        }
    }
    if(a)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
