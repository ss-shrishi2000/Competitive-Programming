#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n; cin>>n;
 int a[n], fr[5];
 memset(fr, 0, sizeof(fr));
 for(int i=0; i<n;i++)
 {
   cin>>a[i];
   fr[a[i]]++;
 }
 int m1 = max(fr[1] , max(fr[3] ,fr[2]));
 cout<<n-m1;
 return 0;
}
