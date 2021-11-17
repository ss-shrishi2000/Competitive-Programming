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
        while(i<n && j<m)
        {
            if(vn[i]==0)
            {
               ans.push_back(vn[i]);i++;r++;
            }
            else if(vm[j]==0)
            {
                ans.push_back(vm[j]);j++;r++;
            }
            else if( i<n && vn[i]<=r)
            {
                ans.push_back(vn[i]);i++;
            }
            else if(j<m && vm[j]<=r)
            {
                ans.push_back(vm[j]);j++;
            }
            else if(i<n && j<m && vn[i]>r && vm[j]>r)
            {
              // cout<< "12" << endl;
                f=false;
                break;
            }
        }
        if(f==false)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            if(i!=n)
            {
                while(i<n)
                {
                    if(vn[i]==0)
                    {
                        ans.push_back(0);i++;r++;
                    }
                    else if(i<n && vn[i]<=r)
                    {
                        ans.push_back(vn[i]);
                        i++;
                    }
                    else
                    {
                      //   cout<< "13" << endl;
                        f=false;
                        break;
                    }
                }
            }
            if(j!=m)
            {
                while(j<m)
                {
                    if(vm[j]==0)
                    {
                        ans.push_back(0);j++;
                        r++;
                    }
                    else if(j<m && vm[j]<=r)
                    {
                        ans.push_back(vm[j]);
                        j++;
                    }
                    else
                    {
                        // cout<< "14" << endl;
                        f=false;
                        break;
                    }
                }
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
