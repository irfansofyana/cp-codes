#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,x;
	long long banyak=0;
	long long kembalian;
	bool p=true;
	
	cin>>n;
	i=1;
	while ((i<=n) && (p))
		{
			cin>>x;
			if (i==1){
				if (x>25)
					p=false;
				else if (x==25)
				banyak+=25;
			}
			else 
				{
					kembalian=x-25;
					if (kembalian>banyak)
						p=false;
					else if (kembalian<=banyak)
						{
							banyak=banyak-kembalian;
							banyak+=x;
						}
				}
			i++;
		}
	if (p)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}