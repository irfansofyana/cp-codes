#include <bits/stdc++.h>
using namespace std;
int sb,st,db,dt,in;
int n,i,temp1,temp2;
int main(){
	scanf("%d",&n);
	in=n;
	while (n--){
		scanf("%d %d",&temp1,&temp2);
		if (temp1==1) sb++; else st++;
		if (temp2==1) db++; else dt++;
	}
	printf("%d\n",in-max(sb,st)+in-max(db,dt));
	return 0;
}

