#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;cin>>l;
    string s;cin>>s;
    int m=0,m1=0;
    for(int i=l-1;i>1;i--)
    {
        if(s[i]=='r'&&(s[i-1]=='r')){
            if(s[i-2]=='b'){swap(s[i-1],s[i-2]);i-=2;m++;}
            else{m++;s[i-1]='b';}
        }
       else if(s[i]=='b'&&(s[i-1]=='b')){
            if(s[i-2]=='r'){swap(s[i-1],s[i-2]);i-=2;m++;}
            else{m++;s[i-1]='r';}
        }
    }
    for(int i=0;i<l-3;i++)
    {
        if(s[i]=='r'&&(s[i+1]=='r')){
            if(s[i+2]=='b'){swap(s[i+1],s[i+2]);i+=2;m1++;}
            else{m1++;s[i+1]='b';}
        }
       else if(s[i]=='b'&&(s[i+1]=='b')){
            if(s[i-2]=='r'){swap(s[i+1],s[i+2]);i+=2;m1++;}
            else{m1++;s[i+1]='r';}
        }
    }
    cout<<max(m1,m);
}
