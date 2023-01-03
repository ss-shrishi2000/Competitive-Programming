#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n;
        vector<int> a;
        for(int i = 0; i < n; i++)
            cin>>x, a.push_back(x);

        int t1 = a[0];
        sort(a.begin()+1, a.end());
        for(int i = 1; i < n; i++)
        {
            if(a[i] > t1)
                t1 += (a[i]-t1+1)/2;
        }
        cout<<t1<<endl;
    }
    return 0;
}
