#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> hashmap;
    string s;
    int n,q;
    cin>>n>>q;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>s;
        arr[i]=s;
    }
   // check(hashmap,arr,n);
    for(int i=0;i<n;i++)
    {
        string p = arr[i];
        for(int k = 1; k <= p.size(); k++)
        {
            hashmap[ p.substr(0,k) ]++;
        }
    }
    while(q--)
    {
        string str;
        cin>>str;
        //create all prefixes of given query
        int ans = 0;
        for(int i=0;i<str.size();i++)
        {
            for(int j=1;j<=str.size();j++)
            {
                string df = str.substr(i,j);
                if(hashmap.find(df)!=hashmap.end())
                    ans+= hashmap[df];
            }
        }

        cout << ans <<endl;
    }
    return 0;
}
