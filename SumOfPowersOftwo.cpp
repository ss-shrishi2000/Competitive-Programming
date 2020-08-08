#include <iostream>
using namespace std;
void check(int n, int k)
{
    int sum = k;
    int A[k];
    fill(A, A + k, 1);
    for (int i = k - 1; i >= 0; --i) {
        while (sum + A[i] <= n) {
            sum += A[i];
            A[i] *= 2;
        }
    }
    if (sum != n) {
        cout << "NO";
    }
    else {
            cout<<"YES"<<endl;
        for (int i = 0; i < k; ++i)
            cout << A[i]<<' ';
    }
}
int main()
{
    int n,k;cin>>n>>k;
    check(n,k);
}

