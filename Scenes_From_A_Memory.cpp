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
        string s;
        cin>>s;
        bool f=false;
        for(int i=0;i<s.size();i++)
        {
            int x=s[i]-'0';
            if(x==1)
            {
                cout<<1<<endl<<1<<endl;
                f=true;
                break;
            }
            if((x%2==0 && x!=2) || (x%3==0 && x!=3) || (x%5==0 && x!=5) || (x%7==0 && x!=7))
            {
                cout<<1<<endl<<x<<endl;
                f=true;
                break;
            }
        }
        int ans;
        if(f==false)
        {
            for(int i=0;i<s.size();i++)
            {
                int r;
                for(int j=i+1;j<s.size();j++)
                {
                    string t=s.substr(i,1) + s.substr(j,1);
                    r=stoi(t);
                    for(int y=2;y<=sqrt(r)+1;y++)
                    {
                        if(r%y==0)
                        {
                            f=true;
                            break;
                        }
                    }
                    if(f==true)
                        break;
                }
                if(f==true)
                {
                   ans=r;
                   break;
                }
            }
            cout<<2<<endl;
            cout<<ans<<endl;
        }
    }
    return 0;
}
