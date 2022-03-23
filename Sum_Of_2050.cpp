#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli arr[30]={0};
    for(int i=0; i<=15; i++)
    {
        arr[i] = 2050*(pow(10,i));
    }

    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        int x=0;
        if(n<2050)
        {
            cout<<-1<<endl;
            continue;
        }

        for(int i=15; i>=0 && n>0; )
        {
            if(n>=arr[i])
            {
                while(n>=arr[i] && n>0)
                {
                    x++;
                    n-=arr[i];
                }
                i--;
                if(n==0)
                    break;
            }
            else
                i--;

            if(n==0)
                break;
        }
        if(n)
            cout<<-1<<endl;
        else
            cout<<x<<endl;
    }
}
