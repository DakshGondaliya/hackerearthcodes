#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        int c;
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] = char((int(s[i])+32));
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            s[i] = char((int(s[i])-32));
        }
    }
    cout << s;
    return 0;
}
