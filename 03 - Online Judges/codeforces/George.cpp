#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,a,b;
	int banyak=0;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		cin>>a>>b;
		if ((b-a)>=2)
			banyak++;
	}
	printf("%d\n",banyak);
	return 0;
}