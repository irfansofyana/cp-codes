#include <bits/stdc++.h>
using namespace std;

int main(){
	int s,n;
	int i,x,y,j;
	int A[10000],B[10000];
	bool p=true;
		
	cin>>s>>n;
	for (i=0;i<n;i++)
		{
			cin>>x>>y;
			A[i]=x;
			B[(x*i)]=y;
		}
	sort(A,A+n);
	for (i=0;i<n;i++)
		{
			if (A[i]>=s)
				p=false;
			else if (s>A[i])
				{
					s=s+B[(A[i]*i)];
				}
		}
	printf("%d\n",s);
	if (p)
		printf("YES\n");
	else
		printf("NO\n");
}