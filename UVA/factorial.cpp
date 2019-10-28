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
int main(){
	int n,i,j,banyak=0,l=1,k;
	int idx;
	
	cin>>n;
	while (n!=0){
		l=1;
		k=n;
		for (j=2;j<=n;j++){
			if (cekprima(j)){
				idx=j;
			}
		}
		for (j=2;j<=k;j++)
			{
				if (cekprima(j))
					{
						banyak=0;
						while (j<=n)
							{
								n=n/j;
								banyak+=n;
							}
						if ((l==1))
							{
								if (j==idx)
									printf("%d! = %d\n",k,banyak);
								else
									printf("%d! = %d ",k,banyak);
								l++;
							}
						else if ((l!=1) && (j!=idx))
							printf("%d ",banyak);
						else if ((l!=1) && (j==idx)){
							printf("%d\n",banyak);
							break;
						}
					}
				n=k;
			}
		cin>>n;
	}
}