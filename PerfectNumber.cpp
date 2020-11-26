#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
int main()
{
    int k;cin>>k;
    for(int i=1;i<=100000000;i++)
    {
        int p=0,q=i;
        while(q>0)
        {
            int rem=q%10;
            p+=rem;
            q=q/10;
        }
        if(p==10)
            ans.push_back(i);

        if(ans.size()==k)
            break;
    }
    cout<<ans[k-1];
    return 0;
}
