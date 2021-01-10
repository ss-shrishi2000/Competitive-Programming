#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            if((s[i]-'0')%2==0 && (i%2!=0))
                e++;
            else if((s[i]-'0')%2!=0 && (i%2==0))
                o++;
        }
        if(((n%2==0)&&e) || (n&1 && o==0))cout <<2<<endl;
	    else cout <<1<<endl;
    }
}
