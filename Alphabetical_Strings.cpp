#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n = str.size();
        int i=0,j=n-1;
        n--;
        while(i<=j)
        {
            if(str[i]-'a'==n)
                     i++;
            else if(str[j]-'a'==n)
                         j--;
            else
            break;
            n--;
        }
        if(j<i)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
}
