#include <bits/stdc++.h>
using namespace std;
int fpb(int p,int q){
	if (q==0)
		return p;
	else
		return fpb(q,p%q);
}
int main(){
	int a,b,banyak=0,c,d;
	cin>>a>>b;
	for (int i=1;i<=6;i++){
		if (i>=max(a,b))
			banyak++;
	}
	c=banyak/fpb(banyak,6);
	d=6/fpb(banyak,6);
	if (c==0)
		d=1;
	printf("%d/%d\n",c,d);
}
