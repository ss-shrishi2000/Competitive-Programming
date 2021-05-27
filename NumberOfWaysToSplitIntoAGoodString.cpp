#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    set<char> s1,s2;
    int cnt=0;
        for(int i=1;i<s.size();i++)
        {
            string t1=s.substr(0,i);
            string t2=s.substr(i,s.size()-i);
          //  cout<<t1<<endl<<t2<<endl;

          for(int i=0;i<t1.size();i++)
          {
              s1.insert(t1[i]);
          }
          for(int i=0;i<t2.size();i++)
          {
              s2.insert(t2[i]);
          }
          if(s1.size()==s2.size())
            cnt++;

            s1.clear();
            s2.clear();
        }
        cout<<cnt;
        return 0;
}
