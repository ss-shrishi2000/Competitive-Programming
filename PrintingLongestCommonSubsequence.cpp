#include<bits/stdc++.h>
using namespace std;
string s;
void printLCS(string x,string y)
{
    int n=x.size(),m=y.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(x[i]==y[j])
            {
                s+=x[i];break;
            }
        }
    }
    cout<<s<<endl;
}
int main()
{
    string x,y;cin>>x>>y;
    printLCS(x,y);
}
