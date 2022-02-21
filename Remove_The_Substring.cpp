#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int ans = 0;
    if(s.size()==2 && t.size()==1)
    {
        if(s[0]==t[0])
        {
            cout<<1;
            return 0;
        }
        else if(s[1]==t[0])
        {
            cout<<1;
            return 0;
        }
        else
        {
            cout<<0;
            return 0;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        for(int j = i; j<s.size(); j++)
        {
            string check = s.substr(0,i) + s.substr(j+1);
            //cout<<check<<endl;
            int r=0;
            for(int k=0; k<check.size() && r<t.size(); k++)
            {
                if(check[k] == t[r])
                    r++;
            }

            if(r==t.size())
                ans = max(ans, j-i+1);


            /*

            int left = 0, right = check.size()-1;
            int x=0, y=t.size()-1;
            while(left <= right && x<=y)
            {
                if(t[x] == check[left])
                {
                    x++;
                    left++;
                }
                if(t[y] == check[right])
                {
                    y--;
                    right--;
                }
                if(t[x] != check[left])
                {
                    x++;
                }
                if(t[y] != check[right])
                {
                    y--;
                }
            }
            if(x>y)
                ans = max(ans, j-i);

                */

        }
    }
    cout << ans<< endl;
    return 0;
}
