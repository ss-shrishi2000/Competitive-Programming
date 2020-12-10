#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,v1,v2,P;
    int vaccine=0;
    cin>>d1>>v1>>d2>>v2>>P;
    int cur_day=min(d1,d2),total_day=0;
    //till here 0 vaccines are created;
    total_day=cur_day;
    if(cur_day==d1)
    {
        if(P<v1)
        {
            cout<<cur_day+1;
            return 0;
        }
        else{
            int diff=d2-d1;
            while(P>vaccine && diff>0)
            {
                vaccine+=v1;
                diff--;
                total_day++;
            }
            if(P<=0)
            {
                cout<<total_day;
                return 0;
            }
        }
    }
    else{
        if(P<v2)
        {
            cout<<cur_day+1;
            return 0;
        }
        else{
            int diff=d1-d2;
            while(P>vaccine && diff>0)
            {
                vaccine+=v2;
                diff--;
                total_day++;
            }
            if(P<=0)
            {
                cout<<total_day;
                return 0;
            }
        }
    }
    //now whatsoever medicine will be formed that will be of V1+V2 RATE
    int rem=P-vaccine;
    if(rem%(v1+v2)==0)
    {
        cout<<total_day+(rem/(v1+v2))-1;
    }
    else{
        total_day+=((rem)/(v1+v2));
        cout<<total_day;
    }
    return 0;
}
