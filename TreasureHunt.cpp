#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    int fx,fy;cin>>fx>>fy;
    if( abs(x1-x2)%fx==0 && ((abs(y1-y2)% fy==0)))
    {
        int step_x= abs(x1-x2)/fx;
        int step_y= abs(y1-y2)/fy;
        if(step_x%2 == step_y%2 )
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
