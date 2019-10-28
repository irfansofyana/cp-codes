#include <bits/stdc++.h>

using namespace std;

struct paket{
	int x,y,jarak;	
};

int n,m,k,i,j,idx;
paket A[1000000];

bool comp(paket a,paket b) {
	if (a.jarak==b.jarak) {
		if (a.x==b.x)
			return (a.y<b.y);
		else return (a.x<b.x);
	}
	else return (a.jarak<b.jarak);
}
int main(){
	scanf("%d %d %d",&n,&m,&k);
	idx = 0;
	for (i=1;i<=n;i++) 
		for (j=1;j<=m;j++) {
			A[idx].jarak = abs(i)+abs(j);
			A[idx].x = i; 
			A[idx].y = j;
			idx++;	
		}
	sort(A,A+idx,comp);
	printf("%d %d\n",A[k-1].x,A[k-1].y);
	return 0;
}
