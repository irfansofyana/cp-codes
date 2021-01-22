#include <bits/stdc++.h>
using namespace std;
bool cekprima(long long a)
{
	long long i;
	bool p;
	
	if (a<=1)
		return false;
	else
	{
		p=true;
		i=2;
		while ((i<=int(sqrt(a))) && (p))
			{
				if (a%i==0)
					p=true;
				else
				i++;
			}
		return p;
	}
}
int main(){
	long long n,i,j;
	long long x,k;
	
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
			cin>>x;
			k=int(sqrt(x));
			if ((k*k==x) && (cekprima(k)))
				printf("YES\n");
			else
				printf("NO\n");
		}
}