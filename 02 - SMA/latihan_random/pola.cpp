#include <bits/stdc++.h>
using namespace std;
int n,i,j,k;
int main(){
	scanf("%d",&n);
	if (n%2==1) {
		j=(n/2)+1;
		k=1;
	}
	else {
		j=n/2;
		k=2;
	}
	for (i=1;i<=n;i++){
		if (i<=j) {
			for (int z=1;z<=k;z++) printf("$");
			printf("\n");
			k+=2;
		}
		else {
			if (i-j==1) k-=3;
			for (int z=1;z<=k;z++) printf("$");
			printf("\n");
			k-=2;
		}
	}
	return 0;
}
