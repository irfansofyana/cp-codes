#include<cstdio>
int p[100010];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    scanf("%d",p+i);
    int i;
    for(i=n-1;i>=1;i--)
    if(p[i]!=p[i+1])
    break;
    printf("%d",(i<k)?i:-1);
    return 0;
}
