#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,h,max=0;
	int hasil;
	
	scanf("%d",&h);
	while ((h!=0)){
		n=h;
		max=n;
		while (n>1){
			if (n%2==0){
				n=n/2;
				if (n>max)
					max=n;
				}
			else{
				n=3*n+1;
				if (n>max)
					max=n;
			}
		}
		printf("%d\n",max);
		scanf("%d",&h);
	}
	return 0;
}