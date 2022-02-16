#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    map <int, map<int,int>> mp ;
    while (n--)
    {
        string s;
        cin>>s;
        int left=0, right=0;

        for(int i=0; i<s.size(); i++)
        {
            if (s[i] == ')')
                if (right)
                  right-- ;
                else
                  left++ ;
            else
                right++;
        }

        if ( left && right)
               continue;

        if ( mp[left][right] )
        {
            cnt++ ;
            mp[left][right]-- ;
        }
        else
            mp[right][left]++ ;
    }
    cout << cnt ;
    return 0;

}
