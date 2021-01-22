#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[10005],B[10005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	int ans,maxx;
	maxx = 0;
	for (i = 1 ; i <= n ; i++) {
		int x,y;
		cin >> x >> y;
		A[i] = A[i-1]+x; B[i] = B[i-1]+y;
		if (abs(A[i]-B[i])>maxx) {
			maxx = abs(A[i]-B[i]);
			if (A[i]>B[i]) ans = 1;
			else ans = 2;
		}
	}
	cout << ans << " " << maxx << '\n';
	return 0;
}