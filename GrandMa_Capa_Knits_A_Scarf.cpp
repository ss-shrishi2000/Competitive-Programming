#include<bits/stdc++.h>
using namespace std;
bool isPalin(string s)
{
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i] != s[s.size()-1-i])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = INT_MAX;
        if(isPalin(s))
            cout<<0<<endl;
        else
        {
            for(char ch = 'a'; ch <= 'z'; ch++)
            {
                string referen = "";
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]!=ch)
                        referen+=s[i];
                }

                if(isPalin(referen))
                {
                    int tmp = 0;
                    int left = 0, right = s.size()-1;
                    while(left<right)
                    {
                        if(s[left] != s[right])
                        {
                            if(s[left] == ch)
                                left++;
                            else
                                right--;

                            tmp++;
                        }
                        else
                            left++ , right--;
                    }
                    ans = min(ans, tmp);
                }
            }

            if(ans == INT_MAX)
                cout<<-1<<endl;
            else
                cout<<ans<<endl;
        }
    }
    return 0;
}
