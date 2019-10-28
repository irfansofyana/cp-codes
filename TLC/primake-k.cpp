#include <bits/stdc++.h>
using namespace std;
bool cekprima(int a)
{
	bool p;
	int q;
	
	if (a<=1)
		return false;
	else
	{
		p=true;
		q=2;
		while ((q<=int(sqrt(a))) && (p))
			{
				if (a%q==0)
					p=false;
				else
				q++;
			}
		return p;
	}
}
int main(){
	int a,j=3;
	int t,x,i=1;
	int A[77777];
	int Ans[20000];
	
	scanf("%d",&t);
	A[0]=2;
	while (i<77777)
		{
			if (cekprima(j))
				{
					A[i]=j;
					i++;
				}
			j=j+2;
		}
	for (i=0;i<t;i++)
		{
			scanf("%d",&x);
			Ans[i]=A[x-1];
		}
	for (i=0;i<t;i++)
		{
			printf("%d\n",Ans[i]);
		}
	return 0;
}