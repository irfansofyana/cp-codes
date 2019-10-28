#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,p,q,maks;
	int a,b,c;
	int idx;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d %d",&p,&q);
		a=(9*p*p)+q*q;
		b=2*p*p+25*q*q;
		c=q*q*q-100*p;
		if (a>b){
			maks=a;
			idx=1;
			}
		else if (b>a){
			maks=b;
			idx=2;
			}
			
		if (maks>c){
			if (idx==1)
				printf("Rafael ganhou\n");
			else  if (idx==2)
				printf("Beto ganhou\n");
		}
		else
			printf("Carlos ganhou\n");
	}
	return 0;
}