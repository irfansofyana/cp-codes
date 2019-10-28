#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int arr[10][10];
int colom[10];
int ans;

int modulo(int p,int q){
	return p-(p/q)*q;
}

void bruteforce(int pos) {
	if (pos==n) {
		int maks = -1;
		for (int z = 0; z < n ; z++)
			maks = max(maks,colom[z]);
		ans = min(maks,ans);
	}
	else {
		for (int z = 0 ; z < n ; z++) {
			for (int zz = 0 ; zz < n ; zz++) 
				colom[modulo(zz+z,n)] += arr[pos][zz];
			bruteforce(pos + 1);
			for (int zz = 0 ; zz < n ; zz++) 
				colom[modulo(zz+z,n)] -= arr[pos][zz];
		}
	}
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (scanf("%d", &n)) {
		if (n==-1) return 0;
		
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < n ; j++)
				scanf("%d", &arr[i][j]);
		ans = 1000000000;
		bruteforce(0);
		printf("%d\n", ans);
	}
	return 0;
}