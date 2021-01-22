#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int i,banyak,c,idx;
	
	scanf("%d %d",&n,&m);
	banyak=n;
	c=(n/m);
	i=1;
	while (c!=0){
		idx=n+i;
			if (idx%m==0){
				c=c+1;
				c=c-1;
			}
			else
				c--;
		i++;
		banyak=banyak+1;
	}
	printf("%d\n",banyak);
	return 0;
}