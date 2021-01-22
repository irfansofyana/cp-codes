#include<bits/stdc++.h>
using namespace std;

int a[5];

main(){
	scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
	int k=0, i=0;
	while(a[k]!=1){
		int x=a[k];
		a[k]=0;
		while(x>0){
			if(k==3) k=-1;
			a[++k]++;			
			x--;
		}
		i++;
		printf("%d\n", k+1);
	} printf("%d %d\n", k+1, i);
}
