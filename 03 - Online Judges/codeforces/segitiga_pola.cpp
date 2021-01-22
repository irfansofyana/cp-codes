#include <bits/stdc++.h>
using namespace std;

int n,i,j,k;
int depan,belakang;

int main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=1;j<=n-i;j++) printf(" ");
		if (i==(n/2)+1||i==n) {
			for (j=1;j<=2*i-1;j++) printf("*");
			printf("\n");
		}
		else{
			if (i<=(n/2)+1){
				for (j=1;j<=2*i-1;j++) {
					if (j==1 || j==2*i-1) printf("*");
					else printf(" ");
				}
				printf("\n");
			}
			else {
				if (i-((n/2)+1)==1) {
					depan=3;
					belakang=2*i-3;
				}
				for (j=1;j<=2*i-1;j++){
					if (j==1 || j==2*i-1 || (j==depan||j==belakang)) printf("*");
					else printf(" ");
				}
				depan+=2;
				printf("\n");
			}
		}
	}
	return 0;
}
