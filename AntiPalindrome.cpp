#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    set<char> c;
    for(int i=0;i<s.size();i++)
    {
        c.insert(s[i]);
    }
    if(c.size()==1){cout<<0;return 0;}
    if(c.size()==s.size()){
        cout<<s.size();
        return 0;
    }
    int ans=0;
    for(int i=s.size();i>=0;i--){
	for(int j = 0;j <= i/2;j++)
  	{
   		if(s[j]!=s[i-j-1]){cout<<i<<endl;return 0;}
  	}
    }
}
