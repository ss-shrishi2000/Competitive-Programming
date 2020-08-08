#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;cin>>n;
	vector<int> a(n),f(20000000,0);
	for(int i=0;i<n;i++)
    {
    cin>>a[i];
    f[a[i]]++;
    }
	int maxval=max_element(f.begin(),f.end())-f.begin();

	int p=find(a.begin(),a.end(),maxval)-a.begin();
	cout<<n-f[maxval]<<endl;

    for(int i=p-1;i>=0;i--){
        cout<<1+(a[i]>a[i+1])<<" "<<i+1<<" "<<i+2<<endl;
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++){
        if(a[i+1]!=maxval){
            assert(a[i]==maxval);
            cout<<1+(a[i+1]>a[i])<<" "<<i+2<<" "<<i+1<<endl;
            a[i+1]=a[i];
        }
    }
}
