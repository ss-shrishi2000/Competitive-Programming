#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005];
int main(){
	string s;
	int n,k=0;cin>>n;
	for(int i=0;i<n;i++)
    {
		cin>>s;
		int x=0,y=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(')x++;
			else
            {
				if(x)x--;
				else y++;
			}
		}
		if (x==0 and y!=0)a[y]++;
        if (y==0 and x!=0)b[x]++;
        if (x==0 and y==0)k++;
	}
	int ans=0;
	for(int i=1;i<=500005;i++)
		ans+=min(a[i],b[i]);
	ans+=k/2;
	cout<<ans;
	return 0;
}
