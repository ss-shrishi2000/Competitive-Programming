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
        for(int i = 0; i < n; i++)
            cin>>a[i];

        bool f1 = false;
        //to check if sorted
        for(int i = 1; i < n; i++)
        {
            if(a[i] < a[i-1])
            {
                f1 = true;
                break;
            }
        }
        if(f1==false)
        {
            cout<<0<<endl;
            continue;
        }

        if(a[n-1] < a[n-2])
        {
            cout<<-1<<endl;
            continue;
        }
        vector<vector<int>> r;
        bool f = true;
        int y = a[n-1], z = a[n-2];
        for(int i = 0; i < n-2; i++)
        {
            int x = a[i];
            vector<int> v;
            v.push_back(i+1);
            v.push_back(n-1);
            v.push_back(n);
            r.push_back(v);
            v.clear();
            a[i] = z - y;
            //cout<<a[i]<<" ";
        }
        //cout<<endl;
        for(int i = 1; i < n-1; i++)
        {
            if(a[i] < a[i-1])
            {
                f = false;
                break;
            }
        }

        if(f==false)
            cout<<-1<<endl;
        else
        {
            cout<<r.size()<<endl;
            for(int i = 0; i < r.size(); i++)
            {
                for(int j = 0; j < 3; j++)
                    cout<<r[i][j]<<" ";
                cout<<endl;
            }
        }
    }
}
