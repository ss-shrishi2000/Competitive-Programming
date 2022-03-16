#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x0, y0;
    cin>>n>>x0>>y0;
    double x[n], y[n];
    for(int i=0; i<n; i++)
        cin>>x[i]>>y[i];

    map<double,int> mp;
    map<pair<int,int>,int> mp2;
    for(int i=0; i<n; i++)
    {
        if(x[i]-x0!=0)
        {
        double slope = (y[i]-y0)/(x[i]-x0);
       // cout<<slope << " " << x[i] << " " << y[i] << endl;
        mp[slope]++;
        }
        else
        {
          //  cout<< x[i]<<" " << x0 << endl;
            mp2[{x[i],x0}]++;
        }
    }
    cout<<mp.size()+mp2.size();
    return 0;
}
