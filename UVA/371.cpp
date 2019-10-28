#include <bits/stdc++.h>

using namespace std;

int l,r,ans;
int maks,i;

int cari(int k){
	int res = 0;
	if (k==1) return 3;
	else {
		while (k!=1) {
			res++;
			if (k%2==0) k/=2;
			else k = 3*k+1;
		}
		return res;
	}
}

int main(){
	while (scanf("%d %d", &l, &r)) { 
		if (l==0 && r==0) break;
		maks = 0; ans = 0;
		for (i = l+1 ; i < r; i++) {
			if (cari(i)>maks) {
				ans = i;
				maks = cari(i);
			}
		}
		printf("Between %d and %d, %d generates the longest sequence of %d values.\n", l, r,ans,maks);
	}
	return 0;
}