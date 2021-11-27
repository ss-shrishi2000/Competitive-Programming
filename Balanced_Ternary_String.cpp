#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	string s;cin>>s;
	int cnt[3]={0};
	for(int i=0;i<n;i++)cnt[s[i]-'0']++;
	n/=3;
	if(cnt[2]>n)
	{
		for(int i=0;i<s.size();i++)
		{
			if(cnt[2]==n)
			break;
			if(s[i]=='2')
			{
			if(cnt[0]<n)
			{
				cnt[2]--;
				cnt[0]++;
				s[i]='0';
			}
			else if(cnt[1]<n)
			{
				cnt[2]--;
				cnt[1]++;
				s[i]='1';
			}
			}
		}
	}
	if(cnt[0]>n)
	{
		for(int i=s.size()-1;i>=0;i--)
		{
			if(cnt[0]==n)
			break;
			if(s[i]=='0')
			{
				if(cnt[2]<n)
				{
					cnt[2]++;
					cnt[0]--;
					s[i]='2';
				}
			else if(cnt[1]<n)
			{
				cnt[1]++;
				cnt[0]--;
				s[i]='1';
			}
			}
		}
	}
	if(cnt[1]>n)
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1')
			{
			if(cnt[0]<n)
			{
				cnt[0]++;
				cnt[1]--;
				s[i]='0';
			}
			}
		}
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]=='1')
			{
			if(cnt[2]<n)
			{
				cnt[2]++;
				cnt[1]--;
				s[i]='2';
			}
			}
		}
	}
	cout<<s;
}
