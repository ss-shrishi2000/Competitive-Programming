#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
		int n;cin >> n;
		int r = (n+3)/4;
		for (int j = 0; j < n-r; j++)cout << 9;
		for (int j = 0; j < r; j++)cout << 8;
		cout << endl;
    }
}
