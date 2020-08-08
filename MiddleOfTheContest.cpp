#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1, m1;
    char c1,c2;
	cin>>h1>>c1>>m1;
	int h2, m2;
	cin>>h2>>c2>>m2;
	int t1 = h1 * 60 + m1;
	int t2 = h2 * 60 + m2;
	int t3 = (t1 + t2) / 2;
	if((t3/60)>=10&&(t3%60)>=10)cout<< t3 / 60<<":"<<t3 % 60;
	else if(t3/60>=10&&(t3%60)<10)cout<<t3/60<<":"<<"0"<<t3%60;
	else if(t3/60<10&&(t3%60)>=10)cout<<"0"<<t3/60<<":"<<t3%60;
	else
        cout<<"0"<<t3/60<<":"<<"0"<<t3%60;
}
