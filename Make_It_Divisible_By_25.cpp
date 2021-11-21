#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        int ans=50;
        cin>>n;
        int arr[25];
        int ind=1;
        while(n>0)
        {
            arr[ind] = n%10;
            n=n/10;
            ind++;
        }
        for(int i=1;i<=ind;i++)
			for(int j=i+1;j<=ind;j++)
            {
				int tmp=arr[j]*10+arr[i];
				if(tmp==0||tmp==25||tmp==50||tmp==75)
				ans=min(ans,j-2);
			}
        cout<<ans<<endl;
    }
    return 0;
}
