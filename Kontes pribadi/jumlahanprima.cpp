#include <bits/stdc++.h>
using namespace std;

bool cekprima(int a)
{
	int i;
	bool p;
	if (a<=1)
		p=false;
	else{
	p=true;
	i=2;
	while (i<=int(sqrt(a))) && (p) {
		if (a%i==0)
			p=false;
		else
		i++;
	}
	}
	return p;
	
}
int main()
{
	int n,i,a,b,j;
	int jumlah;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		jumlah=0;
		scanf("%d %d",&a,&b);
		for (j=a;j<=b;j++){
			if (cekprima(j)==true)
				jumlah=jumlah+j;
		}
		printf("Case %d:\n",i);
		printf("Total :%d\n",jumlah);
	}
	return 0;
}