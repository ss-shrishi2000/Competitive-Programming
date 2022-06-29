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
        if(s.size()<11)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            int ind = -1;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='8')
                {
                    ind = i;
                    break;
                }
            }
            if(ind==-1 or ind>(s.size()-11))
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
