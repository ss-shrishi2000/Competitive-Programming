#include<stdio.h>
int main()
{
    int n,a,mx=0;
    long long int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a);
    if(a>mx)
        mx=a;
    sum+=a;
    }
    if(sum%2==0 && sum>=2*mx)
        printf("YES\n");
    else
        printf("NO\n");
}
