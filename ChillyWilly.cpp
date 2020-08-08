#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    if(n<3)cout<<"-1"<<endl;
    else{
        if(n==3)cout<<"210"<<endl;
    else{
            cout<<"1";
        string a[6]={"110", "050", "080", "170", "020", "200"};
        for(int i=0;i<n-4;i++)
        {
            cout<<"0";
        }
        cout<<a[(n-3)%6];
    }
    }
}
