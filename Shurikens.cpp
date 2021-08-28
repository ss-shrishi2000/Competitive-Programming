#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int plus=0;
    char c;
    set<int> s;
    vector<int> v(2*n,0) , st;
    for(int i=0;i<2*n;i++)
    {
        cin>>c;
        if(c=='+')
            st.push_back(i);
        else
        {
            int x;
            cin>>x;
            if(st.size()==0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                v[i]=x;
                v[st.back()]=-v[i];
                st.pop_back();
            }
        }
    }
    for(int i=0;i<2*n;i++)
    {
        if(v[i]<0)
            s.insert(abs(v[i]));
        else
        {
            if(*s.begin() != v[i])
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                s.erase(v[i]);
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<2*n;i++)
    {
        if(v[i]<0)
            cout<<abs(v[i])<<" ";
    }
    return 0;
}
