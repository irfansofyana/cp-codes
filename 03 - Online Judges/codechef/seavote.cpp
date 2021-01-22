#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[10005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		int sum = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> A[i];
			sum += A[i]-1;
		}	
		if (sum<100 && 100 <= sum+n) puts("YES");
		else puts("NO");
	}
	return 0;
}