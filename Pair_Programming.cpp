#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag , n, m;
        cin>>flag>>n>>m;
        vector<int> vn, vm;
        int x;
        for(int i=0;i<n;i++)
            cin>>x, vn.push_back(x);
        for(int i=0;i<m;i++)
            cin>>x, vm.push_back(x);

        int r=flag, i=0, j=0;
        vector<int> ans;
        bool f=true;

        while(i<n || j<m)
        {
            if( i<n && vn[i]==0 )
                ans.push_back(0) , i++, r++;
            else if( j<m && vm[j]==0 )
                ans.push_back(0), j++, r++;
            else if( i<n && vn[i] && vn[i]<=r )
                ans.push_back(vn[i]), i++;
            else if( j<m && vm[j] && vm[j]<=r )
                ans.push_back(vm[j]), j++;
            else
            {
                f=false;
                break;
            }
        }
        if(f==false)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<ans.size();i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
}
