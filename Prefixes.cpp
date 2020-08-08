#include <iostream>
using namespace std;
int main()
{
	int n,c=0;string s;cin>>n>>s;
	for (int i=0;i<s.size();i+=2)
	{
		if(s[i]==s[i+1])
        {
        s[i]=((s[i]=='a')?'b':'a');
        c++;
        }
	}
	cout<<c<<endl<<s;
}
