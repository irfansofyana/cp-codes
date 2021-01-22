#include <bits/stdc++.h>
using namespace std;
long long faktorial(int a)
{
	if ((a==0)||(a==1))
		return 1;
	else 
		return (a*faktorial(a-1));
}

int main()
{
	int m,n;
	long long jumlah;
	cin>>m>>n;
	
	while (cin){
		jumlah=faktorial(m)+faktorial(n);
		printf("%lld\n",jumlah);
		cin>>m>>n;
	}
	return 0;
}