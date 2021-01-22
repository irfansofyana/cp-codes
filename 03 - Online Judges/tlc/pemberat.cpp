#include <bits/stdc++.h>
using namespace std;
int main(){
	long long B,K,selisih;
	long long j,p,selanjutnya;
	
	scanf("%lld",&B);
	scanf("%lld",&K);
	selisih=K-B;
	
			j=1;
			p=1;
			selanjutnya=2*p;
			while (j<=60)
				{
					if ((p<=selisih)  && (selanjutnya>selisih))
						{
							printf("%lld\n",p);
							selisih=selisih-p;
							j=0;
							
						}
					if (selisih==0)
						break;
					if (j!=0)
					{
					p=p*2;
					selanjutnya=2*p;
					}
					else if (j==0)
						{
							p=1;
							selanjutnya=2*p;
						}
					j++;
				}	
}