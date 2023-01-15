#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        bool f = false;
        for(int i = 1; i < n-1; i++)
        {
            string s1 = s.substr(0, i);
            for(int j = i+1; j < n; j++)
            {
                string s2 = s.substr(i, j-1);
                string s3 = s.substr(j);
                if(s1 <= s2 && s3 <= s2 || (s1 >= s2 && s3 >= s2))
                {
                    f = true;
                    cout<<s1<<" "<<s2<<" "<<s3<<endl;
                    break;
                }
            }
            if(f == true)
                break;
        }
        if(f == false)
            cout<<":("<<endl;
    }
    return 0;
}
