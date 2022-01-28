#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x;cin>>a>>b>>x;
    int c1[2]={0},c2[2]={0};
    string s1="",s2="";
    for(int i=0;i<x;i++)
    {
        if(i%2==0){
        s1+='0';c1[0]++;
        }
        else {
        s1+='1';c1[1]++;
        }

        int j=i;
        if(j%2==0)
        {
        s2+='1';
        c2[0]++;
        }
        else
        {
        s2+='0';
        c2[1]++;
        }
    }
    int a1=a-c1[0];
    int b1=b-c1[1];
    string dummy="";
    if(a1>0)
    {
        while(a1>0)
        {
            dummy+='0';
            a1--;
        }
        dummy+=s1;
    }
    if(b1>0)
    {
        while(b1>0)
        {
            dummy+='1';
            b1--;
        }
    }
    int a2=a-c2[0];
    int b2=b-c2[1];
    string yummy="";
    while(a2>0)
    {
    yummy+='0';
    a2--;
    }
    yummy+=s1;
    while(b2>0)
    {
    yummy+='1';
    b2--;
    }
    if(dummy.size()==a+b)
        cout<<dummy;
    else 
        cout<<yummy;
    
    return 0;
}
