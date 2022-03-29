#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,cst=1;
    cin>>n;
    set<int> current;
    set<pair<int,int>> st;
    map<int,int> hash;


    for(int i=0; i<n; i++)
    {
        int m;
        cin>>x;
        if(x==1)
        {
            cin>>m;
            hash[cst]=m;
            current.insert(cst);
            st.insert({m,-cst});
            cst++;
        }
        else if(x==2)
        {
            int toremove = *(current.begin());
            current.erase(toremove);
            st.erase(make_pair(hash[toremove], -toremove));
            cout<<toremove<<" ";
        }
        else if(x==3)
        {
            pair<int,int> pr = *(st.rbegin());
            // pr->first = maximum tip
            // pr->second = negative of the customer number
            int cst_num = -(pr.second);
            current.erase(cst_num);
            st.erase(pr);
            cout<<-(pr.second)<<" ";
        }
    }
    return 0;
}
