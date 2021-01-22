#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,target;
ll i,j;
ll A[100005];

int main(){
	cin >> n >> target;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i];
	}
	sort(A,A+n);
	ll ans = 0;
	for (i = n-1; i>=0 ; i--) {
		if (A[i]<target) {ans += A[i]; break;}
	}
	for (i = 0 ; i < n ; i++) {
		if (A[i]+ans>=target) {ans += A[i]; break;}
	}
	cout << ans << '\n';
}