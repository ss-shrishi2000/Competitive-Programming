#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        bool f = true;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            bool c = false;
            for(int j = i + 2; j >= 2; j--)
            if (a[i] % j)
            {
                c = true;
                break;
            }
            f &= c;
        }
        if (f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
