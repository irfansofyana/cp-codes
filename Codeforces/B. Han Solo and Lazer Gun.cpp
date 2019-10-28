#include <bits/stdc++.h>
using namespace std;
struct paket{
	int tx,ty;
	double gradien;
};

int n,posx,posy;
int x,y,ans,i,j;
paket A[1005];
double temp;

bool comp(paket a,paket b){
	return (a.gradien<b.gradien);
}
int main() {
	scanf("%d %d %d",&n,&posx,&posy);
	for (i=0;i<n;i++) {
		scanf("%d %d",&x,&y);
		A[i].tx = x;
		A[i].ty = y;
		if (posy==y) A[i].gradien = -1000000000.00;
		else A[i].gradien = double(posx-x)/double(posy-y);		
	}
	sort(A,A+n,comp);
	i = 0;
	while (i<n) {
		temp = A[i].gradien;
		ans++;
		j = i+1;
		while (A[j].gradien==temp && j<n) j++;
		i = j;		
	}
	printf("%d\n",ans);
}
