#include <bits/stdc++.h>
using namespace std;
bool cekprima(int a)
{
	int j;
	bool p;
	if (a<=1)
		return false;
	else
		{
			j=2;
			p=true;
			while ((j<=int(sqrt(a))) && (p))
				{
					if (a%j==0)
						p=false;
					else
						j++;
				}
			return p;
		}
}
long long faktorial(int d)
{
	if ((d==1) || (d==0))
		return 1;
	else
		return (d*faktorial(d-1));
}
int main(){
	int n,i,banyak,k,idx,j=0,m,l;
	cin>>n;
	while (n!=0)
		{
			l=1;
			k=n;
			k=faktorial(k);
			for (m=2;m<=k;m++)
				{
					if ((cekprima(m)) && (k%m==0))
						idx=m;
				}
			for (m=2;m<=k;m++)
				{
					if (cekprima(m))
						{
							if (k%m==0)
								{
									j=0;
									while (k%m==0)
										{
											j++;
											k=k/m;
										}
									if (l==1){
										printf("%d! = %d ",n,j);
										l++;
									}
									else if ((l!=1) && (m!=idx)){
										printf("%d ",j);
									}
									else if (m==idx){
										printf("%d\n",j);
										break;
									}
								}	
							else
							if (l==1){
								printf("%d! = %d ",n,0);
								l++;
							}
							else if ((l!=1) && (m!=idx)){
								printf("%d ",0);
							}
							else if (m==idx){
								printf("%d\n",0);
								break;
							}
						}
				}
			cin>>n;
		}
}