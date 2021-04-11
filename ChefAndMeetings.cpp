#include<bits/stdc++.h>
using namespace std;
int convert_hr(string time)
{
    int hr=10*(time[0]-'0')+(time[0]-'0');
    if(time[6]=='P')
    {
        if(hr!=12)
            hr+=12;
    }
    if(time[6]=='A')
    {
        if(hr==12)
            hr-=12;
    }
    return hr;
}
int convert_min(string time)
{
    int minute;
    minute=10*(time[3]-'0')+(time[4]-'0');
    return minute;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a="";
        char c;
        for(int i=0;i<7;i++)
        {
            cin>>c;
            a.push_back(c);
        }

        int hour_chef=convert_hr(a);
        int min_chef=convert_min(a);

        string ans="";                                   //storing the answer
        int n;
        cin>>n;
        while(n--)
        {
            string begs="",ends="";
            char d;
            for(int i=0;i<17;i++)
            {
               if(i<8)
               {
                   cin>>d;
                   begs.push_back(d);
               }
               if(i>8)
               {
                   cin>>d;
                   ends.push_back(d);
               }
            }
        int hfb=convert_hr(begs);
        cout<<hfb<<endl;
        int mnb=convert_min(begs);
        cout<<mnb<<endl;
        int hfe=convert_hr(ends);
        cout<<hfe<<endl;
        int mne=convert_min(ends);
        cout<<mne<<endl;
        if(hour_chef+min_chef>= hfb+mnb && hour_chef+min_chef<=hfe+mne)
        {
            ans.push_back('1');
        }
        else{
            ans.push_back('0');
        }
        cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
