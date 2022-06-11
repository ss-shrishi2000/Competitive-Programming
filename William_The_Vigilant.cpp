#include<bits/stdc++.h>
using namespace std;
int n,q,cnt,i;
char c;
string s;
int get(int i)
{
    int cnt=0;
    for(int j=max(0,i-2);j<min(n,i+2);j++)
        if(s.substr(j,3)=="abc") cnt++;

    return cnt;
}

int main()
{
	cin>>n>>q>>s;

	for(int i=0;i<s.size();i++)
	if(s.substr(i,3)=="abc") cnt++;

	while(q--)
	{
		cin>>i>>c;
		i--;
		cnt-=get(i);
		s[i]=c;
		cnt+=get(i);
		cout<<cnt<<endl;
	}
	return 0;
}
