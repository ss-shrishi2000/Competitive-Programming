#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        long long s=accumulate(vec.begin(),vec.end(),0LL);
        if(s==n)
            cout<<0<<endl;
        else if(s<n)
            cout<<1<<endl;
        else
            cout<<s-n<<endl;
    }
    return 0;
}
