#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int>& p1, pair<int, int>& p2)
{
    return ((p1.first - p1.second) < (p2.first - p2.second));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int spend[n], budget[n];

        for(int i = 0; i < n; i++)
            cin>>spend[i];

        for(int i = 0; i < n; i++)
            cin>>budget[i];

        pair<int, int> pr[n];

        for(int i = 0; i < n; i++)
        {
            pr[i].first = spend[i];
            pr[i].second = budget[i];
        }

        sort(pr, pr+n, cmp);
        //for(int i = 0; i < n; i++)cout<<pr[i].first<<" "<<pr[i].second<<endl;
        //cout<<endl;
        //cout<<endl;

        int cnt = 0;
        int j = n-1, i = 0;

        while(i<j)
        {
            long long spend = pr[i].first, bud = pr[i].second;
            while(i < j && spend + pr[j].first > bud + pr[j].second)
                j--;

            if(i<j)
                cnt++;

            i++;
            j--;
            if(i==j)break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
