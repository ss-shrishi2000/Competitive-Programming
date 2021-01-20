#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6];
    int s1=0,s2=0,s3=0;
    for(int i=0;i<6;i++)cin>>a[i],s1+=a[i];
    sort(a,a+6);
    if(s1%2!=0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<6;i++)
        for(int j=0;j<6 && j!=i;j++)
            for(int k=0; k<6 && k!=j && k!=i ; k++)
        {
            s2=a[i]+a[j]+a[k];
            //cout<<s2<< " " << s1<<endl;
            s3=s1-s2;
            if(s3==s2)
            {
                cout<<"YES";
                return 0;
            }
        }
    cout<<"NO";
    return 0;
}
