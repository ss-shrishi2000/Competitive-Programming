#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ax,ay,bx,by,cx,cy;cin>>ax>>ay>>bx>>by>>cx>>cy;
    double p=(by-ay)/(bx-ax),q=(cy-ay)/(cx-ax),r=(cy-by)/(cx-bx);
    if(abs(p)==abs(q)==abs(r))cout<<"NO";
    else cout<<"YES";
}
