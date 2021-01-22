#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	bool p;
	int bil;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		p=true;
		scanf("%d",&bil);
		for (j=2;j<=int(sqrt(bil));j++){
			if (bil%j==0)
				p=false;
		}
		if (p==true)
			printf("Prime\n");
		else
			printf("Not Prime\n");
	}
	return 0;
}