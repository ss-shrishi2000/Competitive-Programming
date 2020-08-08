#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;cin>>s;
    while(s.find("WUB") != -1){
        s.replace(s.find("WUB"),3," ");
    }
    cout << s;
}
