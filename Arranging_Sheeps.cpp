#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long ans=0 , x=0;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
                vec.push_back(i+1);
        }
        int num_sheeps=vec.size() ,  mid=vec.size()/2;
        //middle one doesn't need to make any move
        for(int i=0;i<num_sheeps;i++)
        {
			ans=ans+abs(vec[mid]-vec[i])-abs(mid-i);
		}
		cout<<ans<<endl;
    }
    return 0;
}
