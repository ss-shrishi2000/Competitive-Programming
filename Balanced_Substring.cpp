#include<bits/stdc++.h>
using namespace std;
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
        int ca=0,cb=0;
        bool f=false;
        int left , right;
        for(int i=0;i<n;i++)
        {
            ca = 0 , cb=0;
            if(s[i]=='a')
                ca++;
            else
                cb++;

            for(int j=i+1;j<n;j++)
            {
                if(s[j] == 'a')
                    ca++;
                else
                    cb++;

                if(ca == cb)
                {
                    left = i, right = j;
                    f=true;
                    break;
                }
            }
            if(f==true)
                break;
        }
        if(f==true)
            cout<< left + 1 <<" " << right+1<<endl;
        else
            cout<< -1 << " " << -1 << endl;
    }
    return 0;
}
