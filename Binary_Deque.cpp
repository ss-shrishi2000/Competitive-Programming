#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,sum=0;
		cin>>n>>s;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum += a[i];
		}
        int i=0,j=0,curr_sum=0,c=0,max_len=0;
        while(j<n)
        {
            while(curr_sum>s)
            {
                curr_sum -= a[i];
                i++;
            }

            curr_sum += a[j];
            if(curr_sum == s)
            {
                max_len = max(max_len,j-i+1);
                c=1;
            }
            j++;
        }
        if(c)
            cout<<n-max_len<<endl;
        else
			cout<<-1<<endl;
	}
	return 0;
}
