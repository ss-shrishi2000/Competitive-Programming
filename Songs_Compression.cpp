#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    vector<int> diff;
    long long int s = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin>>x>>y;
        s += y;
        diff.push_back(x-y);
        ans += x;
    }
    sort(diff.begin(), diff.end());
    if(s > k)
    {
        cout << -1 ;
        return 0;
    }
    if(ans <= k)
    {
        cout << 0;
        return 0;
    }
    int cnt = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if(ans > k)
        {
            ans -= diff[i];
            cnt++;
        }
        else
            break;
    }
    cout << cnt ;
    return 0;
}
