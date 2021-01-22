#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans,biaya;
bool used[1005];
int A[10][10],harga[10][10];
int k[10];

void jelajah(int idx){
	if (idx==n-1) {
		if (biaya<ans) ans = biaya;
	}	
	else {
		for (int z=0;z<k[idx];z++) {
			if (!used[A[idx][z]]) {
				used[A[idx][z]] = true;
				biaya += harga[idx][z];
				jelajah(idx+1);
				used[A[idx][z]] = false;
				biaya -= harga[idx][z];
			}
		}
	}
}

int main(){
	scanf("%d", &n);
	for (i=0;i<n-1;i++) {
		scanf("%d", &k[i]);
		for (j=0;j<k[i];j++) 
			scanf("%d %d", &A[i][j], &harga[i][j]);
	}
	memset(used,false,sizeof used);
	ans = 1000000000;
	biaya = 0;
	jelajah(0);
	if (ans==1000000000) puts("CAN MEH?");
	else printf("%d\n", ans);
	return 0;
}
