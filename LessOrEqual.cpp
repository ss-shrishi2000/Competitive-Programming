#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,sum=0; cin>>n>>k;
   pair<int,int> a[2001];
   vector<int> v;
   v.push_back(0);
   for(int i=1;i<=n;i++){
      cin>>a[i].first;
      a[i].second=i;
   }
   sort(a+1,a+n+1);
   reverse(a+1,a+n+1);
   for(int i=1;i<=k;i++)
   {
      sum+=a[i].first;
      v.push_back(a[i].second);
   }
   sort(v.begin(),v.end());
   v[v.size()-1]=n;
   cout<<sum<<endl;
   for(int i=1;i<v.size();i++) cout<<v[i]-v[i-1]<<" ";
   return 0;
}
