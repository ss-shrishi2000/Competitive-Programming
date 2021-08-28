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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        double s1=0;
        for(int i=0;i<n-1;i++)
            s1+=a[i];
        s1 = s1/(n-1);
        double s2=a[n-1];
        cout<<fixed;
        cout<<setprecision(7);
        cout<< s1+s2 << endl;
    }
    return 0;
}
