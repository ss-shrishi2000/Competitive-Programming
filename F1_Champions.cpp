#include<bits/stdc++.h>
using namespace std;
struct candid
{
    int points;
    int wins[51];
};
map<string,int> score;
bool check1(candid c1,candid c2)
{
    if(c1.points!=c2.points)return (c1.points>c2.points);
    for(int i=0;i<51;i++)
        if(c1.wins[i]!=c2.wins[i])return c1.wins[i]>c2.wins[i];
    return 0;
}
bool check2(candid c1,candid c2)
{
    if(c1.wins[0]!=c2.wins[0])return c1.wins[0]>c2.wins[0];
        check1(c1,c2);
}
int main()
{
    int t,n;cin>>t;
    string s;
    int a[]={25,18,15,12,10,8,6,4,2,1};
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>s;long long sco=0;
            sco=a[i%10];
            score[s].points+=sco;
            score[s].wins[i]++;
        }
    }
    string w1=score.begin()->first,w2=w1;
     for(auto it:score){
        if(check1(it->second,score[w1]))
            w1=it->first;
        if(check2(it->second,score[w2]))
            w2=it->first;
    }
    cout<<w1<<endl<<w2<<endl;
}
