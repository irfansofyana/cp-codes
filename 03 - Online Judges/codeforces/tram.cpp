#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,a,b;
	int banyak=0,max=0;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		cin>>a>>b;
		banyak=banyak-a+b;
			if (banyak>max)
				max=banyak;
	}
	printf("%d\n",max);
	return 0;
}