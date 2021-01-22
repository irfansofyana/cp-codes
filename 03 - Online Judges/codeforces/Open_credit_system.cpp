#include <bits/stdc++.h>
using namespace std;

const int MAXN=100000;
int TC,n,i,j,acuan;
int A[MAXN+5],ans;
bool ada;

int main(){
	scanf("%d", &TC);
	while (TC--) {
		scanf("%d", &n);
		for (i = 0 ; i < n; i++) 
			scanf("%d", &A[i]);
		acuan = A[0]; 
		ada = false;
		ans = -1000000000;
		for (i = 1 ; i < n ; i++) {
			if (A[i]>acuan) acuan = A[i];
			else if (A[i]<acuan) {
				ada = true;
				if (acuan-A[i]>ans) ans = acuan-A[i];
			}
		}
		if (!ada) puts("-1");
		else printf("%d\n", ans);
	}
	return 0;
}
