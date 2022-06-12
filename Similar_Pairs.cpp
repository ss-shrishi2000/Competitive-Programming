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
        map<int, int> mp;
        int ce = 0, co = 0, c1 = 0, c2 = 0;
        for(int i=0; i<n; i++){
            cin>>a[i], mp[a[i]]++;
            if(a[i]%2==0)c1++;
            else c2++;
        }
        //cout<< c1 << " even " << c2 << " odd " << endl;
        if(c1%2==0 && c2%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(a,a+n);
        bool f = false;
        int req = 0;
        if(ce==co)
        {
            req = 1;
        }
        else
            req = abs(ce-co)/2;

        if(req>0){
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]>0)
            {
            if(mp[a[i]+1]>0)
            {
                mp[a[i]+1]--;
                mp[a[i]]--;
                req--;
                if(req==0)break;
            }
            else if(mp[a[i]-1]>0)
            {
                mp[a[i]-1]--;
                mp[a[i]]--;
                req--;
                if(req==0)break;
            }
            }
        }
        }
        if(req==0)
            f = true;

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
