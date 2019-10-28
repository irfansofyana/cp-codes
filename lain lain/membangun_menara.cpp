#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int A[105][3];
int t,n;

int main(){
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int ansmini = 0;
		int ansmaks = 0;
		for (int i = 0 ; i < n ; i++) {
			scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
			int maks = 0;
			int mini = 10000000;
			for (int j = 0 ; j < 3; j++) {
				mini = min(mini, A[i][j]);
				maks = max(maks, A[i][j]);
			}
			ansmini += mini;
			ansmaks += maks;
		}
		printf("%d %d\n", ansmini, ansmaks);
	}
	return 0;
}