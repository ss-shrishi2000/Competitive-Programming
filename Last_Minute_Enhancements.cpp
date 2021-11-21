#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        map<int,int> mp;
        int dis=0;
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
           if(mp[arr[i]]==0)
                dis++,mp[arr[i]]++;
           else
           {
               if(mp[arr[i]+1]==0)
                   dis++, mp[arr[i]+1]++;

           }
        }
        cout<<dis<<endl;
    }
}
