#include <bits/stdc++.h>
using namespace std;

int main(){
    int32_t t;
    cin >> t;
    while(t--){
        int32_t n;
        string c,s;
        cin >> n >> c >> s;
        int cnt = 0, last = -1;
        for(int i=0;i<n;i++){
            if(s[i] == c[0]) cnt++, last = i+1;
        }
        if(cnt == n) cout << "0\n";
        else if(last > n/2) cout << "1\n" << last << '\n';
        else cout << "2\n" << n-1 << ' ' << n << '\n';
    }
}
