#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="";
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    unordered_map<long long , long long > mp;
    unordered_set<long long> uniq;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
        uniq.insert(a[i]);
    }
    long long single=0, multi=0, multi_num=-1;
    for(auto it:uniq)
    {
        if (mp[it]==1) {
            single++;
        }
        else if (mp[it]>2)
        {
            multi++;
            multi_num=it;
        }
    }

    if (single%2==1 && multi==0)
    {
        cout<<"NO";
        return 0;
    }

    long long rem = single%2 ;
    long long p=0, q=0;
    for(int i=0;i<n;i++)
    {
        if (mp[a[i]]==1)
        {
            if (p>q)
            {
                s.push_back('B');
                q++;
            }
            else
            {
                s.push_back('A');
                p++;
            }
        }
        else if(mp[a[i]]==2)
        {
             s.push_back('A');
        }
        else
        {
            if (a[i] == multi_num )
            {
                if (rem>0)
                {
                    s.push_back('B');
                    rem--;
                }
                else
                {
                     s.push_back('A');
                }
            }
            else
            {
                s.push_back('A');
            }
        }
    }
    cout<<"YES"<<endl<<s;
    return 0;
}
