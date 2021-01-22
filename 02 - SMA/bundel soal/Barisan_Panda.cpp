#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int k;
int A[201][20000];

void isi_array(){
	int l,m;
	A[3][0] = 1;
	A[3][1] = 2;
	A[3][2] = 2;
	A[3][3] = 1;
	for (i=4;i<=200;i++) {
		for (j=0;j<i;j++) {
			l = j;
			for (k=0;k<=((i-1)*(i-2))/2;k++){
				A[i][l]+=A[i-1][k]; 
				l++;
			}
		}
	}
}
int main(){
	scanf("%d",&t);
	isi_array();
	while (t--) {
		scanf("%d %d",&n,&k);
		printf("%d\n",A[n][k]%1000007);
	}
}
