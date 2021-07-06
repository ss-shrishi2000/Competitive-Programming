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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        vector<int> vec1,vec2;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                vec1.push_back(a[i]);
            else if(a[i]==a[i-1])
                vec2.push_back(a[i]);
            else
                vec1.push_back(a[i]);
        }
        for(int i=0;i<vec1.size();i++)
            cout<<vec1[i]<<" ";

        for(int i=0;i<vec2.size();i++)
            cout<<vec2[i]<<" ";

        cout<<endl;
    }
}
