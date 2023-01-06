#include<bits/stdc++.h>
#define ppi pair<int, int>

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

        for(int i = 0; i <n; i++)
            cin>>a[i];

        long long c = 0;

        for(int i = 0; i < n; i++)
        {
            long long x = 0, y = a[i];
            while(y%2==0)
            {
                x++;
                y = y/2;
            }
            c += x;
        }
        // c contains powers of 2 in each element already present
        long long rem = n - c;
        // rem number of powers to be added to make it perfectly divisible by 2^n

        if(c == n)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            priority_queue<ppi> pq;
            for(int i = 0; i < n; i++)
            {
                int ind = i+1;
                int d = a[i], w = 0;
                while(ind%2==0)
                {
                    ind = ind/2;
                    w++;
                }
                // maximum possible addition into the number shall be with powers of 2 due to index i
                pq.push({w, d});
            }
            long long sum = 0, moves = 0;
            // already have 'c' powers of 2 and need more 'rem' powers of 2
            while(pq.empty()==false && sum < rem)
            {
                ppi tp = pq.top();
                pq.pop();
                int ff = tp.first, ss = tp.second;

                sum += ff;
                moves++;
            }
            if(sum < rem)
                cout<<-1<<endl;
            else
                cout<<moves<<endl;
        }
    }
    return 0;
}
