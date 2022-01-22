#include<bits/stdc++.h>
using namespace std;
int arr[3000][3000];

int main()
{
    int n;
    cin>>n;
    pair<int,int> pr[n];
    for(int i=0; i<n; i++)
    {
        cin>> pr[i].first >> pr[i].second;
    //    arr[pr[i].first + 1000 ][pr[i].second + 1000 ]++;
    }
    long long ans=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int x1 = pr[i].first, y1 = pr[i].second;
            int x2 = pr[j].first, y2 = pr[j].second;

            if( (x1+x2)%2!=0 || (y1+y2)%2!=0)
            {
                continue;
            }
            int mx = (x1+x2)/2, my = (y1+y2)/2;
         //   if(arr[ mx + 1000][ my + 1000])
         //       ans++;

        }
    }
    cout<<ans;
    return 0;

}
