#include<bits/stdc++.h>
using namespace std;
#define maxn 500009

struct node{
    int a[5];
};

//struct of ranks
node rnk[maxn];

bool operator<(const node &x, const node &y)
{
    int cnt=0;
    for(int i=0;i<5;i++)
        if(x.a[i] < y.a[i])
             cnt++;
    if(cnt>2)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ind=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<5;j++)
            {
              cin>>rnk[i].a[j];
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(rnk[i] < rnk[ind])
                ind=i;
        }
        bool f=true;
        for(int i=1;i<=n;i++)
        {
            if(i==ind)
                continue;
            if(rnk[i]<rnk[ind])
            {
                f=false;
                break;
            }
        }
        if(f)
            cout<<ind<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
