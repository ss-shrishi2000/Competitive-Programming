#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans = 0;
        for(int i=0; i<s.size(); i++)
            ans+=(s[i]-'a'+1);

        //cout<<ans<<endl;
        if(s.size()==1)
        {
            cout<< "Bob" <<" "<< (s[0]-'a' + 1) << endl;
        }
        else if(s.size()%2==0)
        {
              cout << "Alice" << " " << ans << endl;
        }
        else
        {
            int x = (s[0]-'a'+1);
            int remx = ans - x;
            int y = (s[s.size()-1]-'a'+1);
            int remy = ans - y;
            cout << "Alice"<< " ";
            if(remx-x > remy-y)
                cout<<remx-x<<endl;
            else
                cout<<remy-y<<endl;
        }
    }
    return 0;
}
