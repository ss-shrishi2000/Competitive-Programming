#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    cin>>num;
    long long x = abs(num);
    string y = to_string(x);
    int p = y.size();
    int dig[p]={0};
        int i=0;
        while(x>0)
        {
            int r = x%10;
            dig[i++] = r;
            cout<<r<<endl;
            x = x/10;
        }
        if(num>0)
            sort(dig,dig+p);
        else
            sort(dig,dig+p,greater<int>());

        if(num==0)
            return 0;

        if(num>0)
        {
        int j=0;
        while(j<i && dig[j]==0)
            j++;

        swap(dig[j],dig[0]);
        }

        string wer = "";
        for(int w=0;w<p;w++)
            wer += to_string(dig[w]);

        //cout<<wer<<endl;

        long long t=0;

        for(int r = 0; r<wer.size(); r++)
             t = t*10 + (wer[r]-'0');

        cout<<t<<endl;

        if(num<0)
            t=-t;

         cout<<t<<endl;

        return 0;
}
