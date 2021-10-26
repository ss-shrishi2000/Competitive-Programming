#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==2 || n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    long long int prod = 1 , g=11;
    int c=0;
    vector<int> ans;
    for(int i=2;i<100;i++)
    {
        if((11*i)%2==0 || (11*i)%3==0 || (11*i)%5==0 || (11*i)%7==0)
            ans.push_back(i*11) , c++ ;
        if(c==n-1)
            break;
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    cout<< 210 << endl;
    return 0;
}
