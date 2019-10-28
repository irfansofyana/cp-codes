#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[100005],B[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n , n>0) {
		for (i = 1 ; i <= n ; i++) {
			cin >> A[i];
			B[A[i]] = i;
		}
		for (i = 1; i<=n; i++) {
			if (A[i]!=B[i]) {
				break;
			}
		}
		if (i==n+1) cout << "ambiguous";
		else cout << "not ambiguous" ;
		cout << '\n';
	}
	return 0;
}