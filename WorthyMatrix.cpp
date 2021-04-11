#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n+1][m+1];

        memset(arr,0,sizeof(arr));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>arr[i][j];
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                arr[i][j]+=arr[i][j-1];
            }
        }

        for(int j=1;j<=m;j++){
            for(int i=1;i<=n;i++){
                arr[i][j]+=arr[i-1][j];
            }
        }

        int ans=0;

        for(int s=1;s<=n;s++){
            for(int i=1;i<=n-s+1;i++)
            {
                int low=1;
                int high=m-s+1,mid,p;
                bool f=false;

                while(low<=high)
                {
                    mid = (high+low)/2;
                    int sum= arr[i+s-1][mid+s-1] - arr[i+s-1][mid-1] - arr[i-1][mid+s-1] + arr[i-1][mid-1];

                    if(sum >= k*s*s)
                    {
                        high= mid-1;
                        p=mid;
                        f=true;
                    }
                    else{
                        low=mid+1;
                    }
                }
                if(f==true){
                    ans+=(m-s-p+2);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
