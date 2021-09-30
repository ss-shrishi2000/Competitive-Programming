#include<bits/stdc++.h>
using namespace std;
#define pic pair<int,char>
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    string ans="";
    vector<pair< int , char >> vec;
    vec.push_back(make_pair(a,'a'));
    vec.push_back(make_pair(b,'b'));
    vec.push_back(make_pair(c,'c'));
    char last;
    sort(vec.begin(),vec.end());
    last='w';
    while(true)
    {
       if(last!= vec[2].second)
       {
           if(vec[2].first>=2)
           {
               ans+= vec[2].second;
               ans+= vec[2].second;
               vec[2].first -= 2;
               last=vec[2].second;
           }
           else if(vec[2].first==1)
           {
               ans += vec[2].second;
               vec[2].first -= 1;
               last=vec[2].second;
           }
       }
       else
       {
           if(vec[1].first>=2)
           {
               ans+= vec[1].second;
               ans+= vec[1].second;
               vec[1].first -= 2;
               last=vec[1].second;
           }
           else if(vec[1].first==1)
           {
               ans += vec[1].second;
               vec[1].first -= 1;
               last=vec[1].second;
           }
       }
       if(last == vec[2].second && vec[0].first+vec[1].first == 0)   //if single char left and appeared last then break
                break;

        sort(vec.begin(),vec.end());
    }
    cout<<ans;
    return 0;
}
