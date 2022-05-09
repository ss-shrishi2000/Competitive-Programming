#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<n+1<<endl;
     cout<<"1 "<<n<<" 10000"<<endl;
    for(int i=0; i<n; i++)
        cout<<"2 "<<i+1<<" "<<a[i]+10000-i<<endl;
}
