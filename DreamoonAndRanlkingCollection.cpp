#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
    int n,x;cin>>n>>x;
    int a[n];
    set<int> s;
    for(int i=0;i<n;i++){cin>>a[i];s.insert(a[i]);}
    int c=0,d=1;
    while(true)
    {
    if(s.find(d)!=s.end())c++;
     else{
    if(x>0){c++;x--;}
   else break;
     }
    d++;
    }
    cout<<c<<endl;
    }
}
