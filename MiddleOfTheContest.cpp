#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1, m1;cin>>h1>>m1;
	int h2, m2;cin>>h2>>m2;
	int t1 = h1 * 60 + m1;
	int t2 = h2 * 60 + m2;
	int t3 = (t1 + t2) / 2;
	cout<<t3/60<<":"<<t3%60;
	return 0;
}
