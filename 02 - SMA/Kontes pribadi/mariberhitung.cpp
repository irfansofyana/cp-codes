#include <bits/stdc++.h>
using namespace std;

int fpb(int a,int b)
{
	if (b==0)
		return a;
	else	
		return fpb(b,a%b);
}

int main(){
	int t,i,j,jumlah,jumlah1;
	int n,m,a,b,c;
	
	cin>>n;
	for (i=1;i<=n;i++){
		jumlah=0;
		jumlah1=0;
		scanf("%d %d %d %d",&a,&b,&n,&m);
		if (a%n==0) {
			if (b%n==0)
				jumlah=int(double(((b/n)/2)*(a+b)));
			else
				{
					jumlah=int(double(((b/n)/2)*(a+(b-(b%n)))));
				}
			
		}
		else{
			if (b%n==0)
			{
			if (a>n)
				jumlah=int(double((((b-1)/n)/2)*(2*n+b)));
			else	
				jumlah=int(double((((b-1)/n)/2)*(n+b)));
			}
			else{
			if (a>n)
				jumlah=int(double((((b-1)/n)/2)*(2*n+b-(b%n))));
			else
				jumlah=int(double((((b-1)/n)/2)*(n+b-(b%n))));
		}
		c=(n*m)/(fpb(n,m));
		if (a%c==0) {
			if (b%c==0)
				jumlah1=int(double(((b/c)/2)*(a+b)));
			else
				{
					jumlah1=int(double(((b/c)/2)*(a+(b-(b%c)))));
				}
			
		}
		else{
			if (b%c==0)
			{
				if (a>c)
				jumlah1=int(double((((b-1)/c)/2)*(2*c+b)));
			else
				jumlah1=int(double((((b-1)/c)/2)*(c+b)));
			}
			else{
				if (a>c)
					jumlah1=int(double((((b-1)/c)/2)*(2*c+b-(b%c))));
				else
					jumlah1=int(double((((b-1)/c)/2)*(c+b-(b%n))));
			}
		}
		printf("%d\n",jumlah);
		printf("%d\n",jumlah1);
		jumlah=jumlah-jumlah1;
		printf("%d\n",jumlah);
	}
	return 0;
}
}