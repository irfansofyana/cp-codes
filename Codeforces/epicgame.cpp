#include <bits/stdc++.h>
using namespace std;
int fpb(int p,int q)
{
	if (q==0)
		return p;
	else
		return fpb(q,p%q);
}

int main(){
	int a,b,c,pemenang;
	int banyak,i;
	
	scanf("%d %d %d",&a,&b,&c);
	banyak=c;
	i=1;
	while (banyak>0){
		if (i%2==1){
			banyak=banyak-fpb(a,banyak);
			pemenang=0;
		}
		else if (i%2==0){
			banyak=banyak-fpb(b,banyak);
			pemenang=1;
		}
		i++;
	}
	printf("%d\n",pemenang);
}