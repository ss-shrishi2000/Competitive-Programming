#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    long long C=0;
    vector< long long > one,two;
    one.push_back(0);
    two.push_back(0);
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a==1)
            one.push_back(b);
        else
            two.push_back(b);

        C+=a;
    }
    sort(one.begin(),one.end());
    sort(two.begin(),two.end());

    long long j=two.size()-1;
    long long i=one.size()-1;
    vector<long long> ans(C+1 , 0 );
    ans[1]=one[i];
    for(long long k=2;k<=C;k+=2)
    {
        ans[k]=ans[k-2];
        if(i<=0 && j<=0)
        {
            ans[k]=ans[k-2];
        }
        else if(i<=0)
        {
            ans[k]+=two[j];
            j--;
        }
        else if(j<=0)
        {
            ans[k]+=one[i]+one[i-1];
            i-=2;
        }
        else{
            if(one[i]+one[i-1]<two[j])
            {
                ans[k]+=two[j];
                j--;
            }
            else{
                ans[k]+=one[i]+one[i-1];
                i-=2;
            }
        }
    }

    i=one.size()-1;
    j=two.size()-1;
    i-=1;
    for(long long k=3;k<=C;k+=2)
    {
        ans[k]=ans[k-2];
        if(i<=0 && j<=0)
        {
            ans[k]=ans[k-2];
        }
        else if(i<=0)
        {
            ans[k]+=two[j];
            j--;
        }
        else if(j<=0)
        {
            ans[k]+=one[i]+one[i-1];
            i-=2;
        }
        else{
            if(one[i]+one[i-1]<two[j])
            {
                ans[k]+=two[j];
                j--;
            }
            else{
                ans[k]+=one[i]+one[i-1];
                i-=2;
            }
        }
    }
    auto it=ans.begin();
    it++;
    for(;it!=ans.end();it++)
        cout<<*it<<" ";
    return 0;
}
