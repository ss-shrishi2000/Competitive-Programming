#include<bits/stdc++.h>
using namespace std;
int fr1[26],fr2[26];
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    if(s1.size()<s2.size())
    {
        cout<<"need tree";
        return 0;
    }
    //automaton
    int i,j=0,pos=0,cnt=0,f=0;
    for(i=0;i<s2.length();i++)
    {

        for(j=pos;j<s1.length();j++)
        {
            if(s2[i]==s1[j])
            {
               // cout<<s2[i]<<endl;
                cnt++;
                pos=j+1;
                break;
            }
        }
        if(cnt==s2.length())
        {
            cout<<"automaton";
            f=1;
            return 0;
        }
    }
    //array
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        cout<<"array";
        return 0;
    }
    //both
    i,j=0,pos=0,cnt=0,f=0;
    for(i=0;i<s2.length();i++)
    {

        for(j=pos;j<s1.length();j++)
        {
            if(s2[i]==s1[j])
            {
                cnt++;
                pos=j+1;
                break;
            }
        }
        if(cnt==s2.length())
        {
            cout<<"both";
            return 0;
        }
    }

    //need tree
    cout<<"need tree";
    return 0;
}
