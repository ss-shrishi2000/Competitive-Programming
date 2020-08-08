#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    set<string> s;
    for(int i=0;i<t;i++)
    {
      string p;cin>>p;
      vector<char> v;
		for(int i=0;i<p.size();i++)
		{
			if(p[i]=='u')
			{
				v.push_back('o');
				v.push_back('o');
			}
			else if(p[i]=='h')
			{
				if(v.size()>0)
				{
					while((v.size()>0))
					{
						if((v[v.size()-1]=='k'))v.pop_back();
						else break;
					}
					v.push_back('h');
				}
				else
				{
					v.push_back('h');
				}
			}
			else v.push_back(p[i]);
		}
			string res="";
			for(int i=0;i<v.size();i++)
			{
				res+=v[i];
			}
		s.insert(res);
    }
    cout<<s.size();
    return 0;
}
