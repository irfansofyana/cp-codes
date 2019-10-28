#include <bits/stdc++.h>
using namespace std;
int n,i,j,l,temp;
int k,A[105][105];
int ans;

int main(){
	scanf("%d", &n);
	for (i = 0; i < n ; i++) 
		for (j = 0 ; j < n ; j++) {
			scanf("%d", &A[i][j]);
			if (i>0) A[i][j]+=A[i-1][j];
			if (j>0) A[i][j]+=A[i][j-1];
			if (i>0 && j>0) A[i][j] -= A[i-1][j-1];
		}
	ans = -127*100*100;
	for (i = 0; i < n ; i++) 	
		for (j = 0 ; j < n ; j++)
			for (k = i ; k < n ; k++)
				for (l = j ; l < n ; l++) {
					temp = A[k][l];
					if (i>0) temp -= A[i-1][l];
					if (j>0) temp -= A[k][j-1];
					if (i>0 && j>0) temp += A[i-1][j-1];
					ans = max(ans,temp);
				}
	cout << ans << endl;
	return 0;
}