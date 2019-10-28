#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[100005];
int t,tc;

int main(){
	cin >> t;
	while (t--) {
		memset(A,-1,sizeof A);
		cin >> n >> m;
		for (i = 1 ; i <= n ; i++) {
			cin >> j;
			if (A[j]==-1) A[j] = i;
		}
		cout << A[m] << '\n';
	}
	return 0;
}