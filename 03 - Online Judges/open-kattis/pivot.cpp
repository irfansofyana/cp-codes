#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[100005];
int maks[100005];
int mini[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 1 ; i<=n ; i++) cin >> A[i];
	mini[n] = A[n];
	for (i = n-1 ; i>=1; i--) {
		mini[i] = min(mini[i+1],A[i]);
	}
	maks[1] = A[1];
	for (i = 2 ; i <= n ; i++) {
		maks[i] = max(maks[i-1],A[i]);
	}
	int ans = 0;
	for (i = 1 ; i <= n ; i++) {
		if (i==1) {
			if (A[i]==1) ans++;
		}
		else if (i!=n){
			if (A[i]>maks[i-1] && A[i]<mini[i+1]) ans++;
		}
		else if (i==n) {
			if (A[i]==n) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}