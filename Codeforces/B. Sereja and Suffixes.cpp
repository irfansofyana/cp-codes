#include<stdio.h>
int n,m,i,d,a[100001],b[100001],c[100002];
int main()
{
     scanf("%d%d",&n,&m);
     for(i=1;i<=n;i++)scanf("%d",&a[i]);
     for(i=n;i>0;i--){c[i]=c[i+1]+(b[a[i]]++?0:1);}
     for(i=0;i<m;i++){scanf("%d",&d);printf("%d\n",c[d]);}
     return 0;
}
