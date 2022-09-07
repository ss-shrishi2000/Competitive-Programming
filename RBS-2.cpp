#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int main()
{
    int c[4];
    cin >> c[0] >> c[1] >> c[2] >> c[3];
    pair<int, int> pr[4];
    int ans = 0;
    pr[0].ff = 2, pr[0].ss = 0;
    pr[1].ff = 1, pr[1].ss = 1;
    pr[2].ff = 1, pr[2].ss = 1;
    pr[3].ff = 0, pr[3].ss = 2;

    if(c[2]>0 && (c[3] == 0 || c[0] == 0))
    {
        cout << 0 << endl;
        return 0;
    }

    for(int i = 0; i< 4; i++)
        ans += pr[i].ff * c[i];

    for(int i = 0; i < 4; i++)
        ans -= pr[i].ss * c[i];
    if(ans)
        cout << 0 << endl;
    else
        cout << 1 << endl;
    return 0;
}
