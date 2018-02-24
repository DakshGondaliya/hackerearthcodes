#include <bits/stdc++.h>>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long> a(n);
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
         sum += a[i];
    }
    sort(a.begin(), a.end());
    long long max = sum - a[0];
    sort(a.rbegin(), a.rend());
    long long min = sum - a[0];
    cout << min << " " << max;
    return 0;
}
