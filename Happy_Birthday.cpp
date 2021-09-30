#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define f first
#define s second
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[10] , ans=INT_MAX;
        for(int i=0;i<10;i++)
            cin>>arr[i] ;

        bool f = false;
        for(int i=1;i<10;i++)
        {
            if(arr[i] == 0)            //any single digit which didnt occur yet
            {
                cout << i << endl;f = true;
                break;
            }
        }
        if(f == false)
        {
            if(arr[0] == 0)
                cout << 10 << endl;

            else
            {
                int mn = arr[0]+1;
                for(int i=1;i<=9;i++)
                    mn = min(mn , arr[i]);

                if(mn == arr[0]+1)
                {
                    cout << 10;
                    while(arr[0]--)
                        cout << 0;
                    cout << endl;
                    continue;
                }
                for(int i = 1; i < 10; i++)
                {
                   if(mn == arr[i])
                    {
                      while(arr[i]--)
                        cout << i;
                      cout << i << endl;
                      break;
                    }
                }
            }
        }
    }
    return 0;
}
