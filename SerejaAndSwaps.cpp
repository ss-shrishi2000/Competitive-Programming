#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int arr[n+10];
    long long int sum=0;
    for(int i=1;i<=n;i++)cin>>arr[i];
    int ans=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            priority_queue<int,vector<int>,greater<int> >p;
            priority_queue<int>q;

            for(int a=i;a<=j;a++)p.push(arr[a]);
            for(int a=1;a<=n;a++){
                if(a==i)a=j;
                else{
                    q.push(arr[a]);
                }
            }

            for(int a=1;a<=k && q.size()!=0;a++)
            {
                if(p.top()>=q.top())break;
                p.pop();
                p.push(q.top());
                q.pop();
            }
            int t=0;
            while(p.size()>0)
            {
                t+=p.top();
                p.pop();
            }
            ans=max(ans,t);
        }
    }
    cout<<ans<<endl;
    return 0;
}
