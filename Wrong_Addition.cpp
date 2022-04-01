#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli a,s;
        cin>>a>>s;
        vector<int> ans;

        bool f=true;

       while(s)
        {
			lli x = a%10;
			lli y = s%10;
			if(x <= y) ans.push_back(y-x);
			else
            {
				s/=10;
				y += 10*(s%10);
                if(x < y && y > 9 && y < 20 )
                    ans.push_back(y-x);
				else
				{
				    f=false;
				    break;
				}
			}
			a/=10;
			s/=10;
		}

        if(a)
        {
            cout<<-1<<endl;
            continue;
        }

        if(f==false)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            while(ans.back() == 0)
                ans.pop_back();

			for(lli i=ans.size()-1; i>=0; i--)
			      cout << ans[i];

			cout << endl;
        }
    }
}
