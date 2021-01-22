#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,idx,k;
struct paket{
	int jarak,x,y;
};
paket A[10010];
bool comp(paket a,paket b){
	if (a.jarak<b.jarak) return true;
	else if (a.jarak==b.jarak){
		if (a.x<b.x) return true;
		else return false;
	}
	else return false;
}
int main(){
	scanf("%d %d %d",&n,&m,&k);
	for (i=1;i<=n;i++){
		for (j=1;j<=m;j++){
			A[idx].jarak=i+j;
			A[idx].x=i;
			A[idx].y=j;
			idx++;
		}
	}
	sort(A,A+idx,comp);
	//for (i=0;i<idx;i++) printf("%d %d\n",A[i].x,A[i].y);
	//printf("%d\n",k);
	printf("%d %d\n",A[k-1].x,A[k-1].y);
	return 0;
}

