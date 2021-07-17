#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        prefix[i + 1] = prefix[i] + x;
    }
    int i=0,j=0;
    long long ans = 0;
    set<long long> s = {0};
    while(i< n)
    {
        while(j<n && !s.count(prefix[j+1]))
        {
            ++j;
            s.insert(prefix[j]);
        }
        ans += j-i;
        s.erase(prefix[i]);
        i+=1;
    }
    cout<<ans;
    return 0;
}
