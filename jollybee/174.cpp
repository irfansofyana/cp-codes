#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int n,m,i,j;
int A[105];

int main(){
	OPTIMASI
	cin >> n >> m;
	for (i = 0 ; i < m ; i++) cin >> A[i];
	for (i = 0 ; i < m ; i++) {
		int j = A[i];
		if (i-1>=0) j += A[i-1];
		if (i+1 < m) j+= A[i+1];
		if (j>=n) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}