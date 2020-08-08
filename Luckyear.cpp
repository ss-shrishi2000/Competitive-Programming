#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,temp,y,count=0;
  cin>>n;
  temp=n;y=n;
  while(temp>0)
    {
      temp = temp/10;
      count++;
    }
  if(count==0)
    cout<<"1"<<endl;
  else
    {
      int d=pow(10,count-1);
      while(n>10)n/=10;
      d*=(n+1);
      cout<<d-y;
    }
  return 0;
}
