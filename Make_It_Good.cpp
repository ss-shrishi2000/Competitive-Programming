#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        int ind=n;
        while(ind>1 && (arr[ind]<=arr[ind-1]))
                ind--;
        while(ind>1 && (arr[ind]>=arr[ind-1]))
            ind--;
        cout<<ind-1<<endl;
    }
}
