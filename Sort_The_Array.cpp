#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> a, b, c;
    int x;

    for(int i=0; i<n; i++)
        cin>>x, a.push_back(x), b.push_back(x), c.push_back(x);


    sort(c.begin(), c.end(), greater<int>());
    sort(b.begin(), b.end());
    if(a==b)
    {
        cout<<"yes"<<endl;
        cout<<1<< " " << 1;
        return 0;
    }
    if(a==c)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<n<<endl;
        return 0;
    }
    int left = 0, right = n-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]!= b[i])
        {
            left = i+1;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]!=b[i])
        {
            right = i+1;
            break;
        }
    }

    reverse(a.begin()+left-1, a.begin()+right);

    if(a==b)
    {
        cout<<"yes"<<endl;
        cout<< left << " " << right;
    }
    else
        cout<<"no"<<endl;

    return 0;
}
