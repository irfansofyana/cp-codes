#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int bn,bm;
bool ganti=false;
int A[1000050];

int main(){
	scanf("%d %d", &n, &m);
	if (n>=m) {
		if (n!=m+1 && n!=m) puts("-1");
		else {
			for (i=0;i<n+m;i++) {
				if (i%2==0) printf("0");
				else printf("1");
			}
			printf("\n");
		}
	} 
	else {
		if (m-2*n>=3) puts("-1");
		else {
			for (i=0;i<((m)/(n+1));i++) {
				for (j=0;j<n+1;j++)
					A[j]++;
			}
			for (i=0;i<(m%(n+1));i++)
				A[i]++;
			for (i=0;i<(n+1);i++){
				for (j=0;j<A[i];j++) printf("1");
				if (i!=n) printf("0");
				else printf("\n");
			} 
		}
	}
	return 0;
}
