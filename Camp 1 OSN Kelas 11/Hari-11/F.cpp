#include <bits/stdc++.h>
using namespace std;

long long n,k,i,j,t;
long long lo,hi,mid,ans;
long long A[500050];

long long f(long long a){
	long long res = 0;
	for (i = 0 ; i < n ; i++) {
		res += (A[i]/a);
	}
	return res;
}

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (i = 0 ; i < n ; i++)
			cin >> A[i];
		sort(A,A+n);
		lo = 1 ; hi = 10000000000;
		ans = 0;
		while (lo<=hi) {
			mid = (lo+hi)/2;
			if (f(mid)>=k) {
				ans = mid;
				lo = mid+1;
			}
			else hi = mid-1;
		}
		cout << ans << endl;
	}
	return 0;
}