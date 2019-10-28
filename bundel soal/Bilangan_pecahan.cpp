#include <bits/stdc++.h>
using namespace std;
int a,b;
int fpb(int p,int q){
	while (q!=0){
		int temp=p;
		p=q;
		q=temp%q;
	}
	return p;
}
int main(){
	scanf("%d %d",&a, &b);
	if (fpb(a,b)==1) printf("Tidak\n");
	else printf("%d %d\n",(a/fpb(a,b)),(b/fpb(a,b)));
	return 0;
}
