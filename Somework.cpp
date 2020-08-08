#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    unordered_map<int,int> m;
    vector<int>vec;
    m[0]=-1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        auto itr=m.find(sum-k);
        if(itr!=m.end())
        {
            cout<<itr->first;
        }
        m[sum]=i;
    }
    return 0;
}
