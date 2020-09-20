 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n;cin>>n;
     long long int a[n];
     map<int,int> mp;
     long long int ans=0;
     for(int i=0;i<n;i++)cin>>a[i];
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<=31;j++)
         {
             int curr=pow(2,j);
             if(curr-a[i]>0)ans+=mp[curr-a[i]];
         }
         mp[a[i]]++;
     }
     cout<<ans;
 }
