#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    double s=0;
    vector<int> num;
    for(int i=0;i<n;i++){cin>>a[i];s+=a[i];}
    double avg=(double)s/n;
    for(int i=0;i<n;i++)
    {
        if(a[i]==avg){
            num.push_back(i+1);
        }
    }
    cout<<num.size()<<endl;
    for(auto p:num)cout<<p<<" ";
    cout<<endl;
}
