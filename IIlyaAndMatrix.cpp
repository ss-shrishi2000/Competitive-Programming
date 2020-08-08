#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
  long long s=0;
  vector<int> a;scanf("%d", &n);
  a.resize(n);
  for (int i = 0; i < n; ++i)scanf("%d", &a[i]);
  sort(a.rbegin(), a.rend());
  for (int m = 1; m <= n; m *= 4)
  {
    s += accumulate(a.begin(), a.begin() + m, 0LL);
  }
  cout << s << endl;
  return 0;
}
