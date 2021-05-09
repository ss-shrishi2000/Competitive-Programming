#include<bits/stdc++.h>
using namespace std;
int main()
{
     int q;
    cin >> q;
    while(q--)
    {
        long long int n, m,sum=0,s1;
        cin>>n>> m;
        n=n/m;                               //total number of integers divisible from 1 to n

        vector<int> vec(10);

        for(int i=0;i<10;i++)
            vec[i]=((i+1)*m)%10;

        for(int i=0;i<(n%10);i++)
            sum+=vec[i];

        s1=accumulate(vec.begin(), vec.end(), 0LL);
        cout << sum + (n/10)*s1 << endl;
    }
    return 0;
}
