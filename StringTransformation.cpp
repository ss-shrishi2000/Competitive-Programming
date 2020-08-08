#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    if(s.size()<26)cout<<"-1";
    else{
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]-'a'<=j){
            s[i]='a'+(j++);
        }
        if (j == 26) {
			cout<<s<<endl;
			return 0;
		}
    }
    cout<<"-1";
    }
}
