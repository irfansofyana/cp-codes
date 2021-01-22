#include <bits/stdc++.h>
using namespace std;

int TC,n,i,j;
int A[10000];
int ans;

int main(){
	cin.tie(0);
	cin >> TC ;
	while (TC--) {
		cin >> n;
		ans = 0;
		for (i = 1 ; i <= n ; i++) cin >> A[i];
		for (i = 2; i<= n ; i++) {
			for (j = 1; j<= i-1 ; j++) {
				if (A[j]<=A[i]) ans++;
			}
		}
		cout << ans << endl;
	}
}