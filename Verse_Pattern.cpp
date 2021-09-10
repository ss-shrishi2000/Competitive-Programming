#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    string str;
    getline(cin,str);
    while(n--)
    {
        c=0;
        getline(cin,str);
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='a'||str[i]=='u'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='y')
                c++;
        }
        b.push_back(c);
    }
    if(a==b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
