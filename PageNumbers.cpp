#include<bits/stdc++.h>
using namespace std;
int cnt[1001],b,a;
char c;
int main()
{
  while(1)
  {
    scanf("%d%c",&a,&c);
    cnt[a]++;
    if(c!=',') break;
  }
  for(int i=1;i<=1000;)
  {
    if(cnt[i])
    {
      if(b) cout<<",";
      int j=i;
      while(cnt[i]) ++i;
      --i;
      if(i==j) cout<<i;
      else cout<<j<<"-"<<i;
      b=1;
    }
    i++;
  }
  cout<<endl;
	return 0;
}
