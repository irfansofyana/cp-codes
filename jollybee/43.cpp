#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int t,n,m,i,j,k;
int A[40005],B[40005];
int temp,target;

int bs(int d,int b) {
	int tengah = (d+b)/2;
	if (d>b) return temp;
	else if (B[tengah]>=target) {
		temp = tengah;
		return bs(d,tengah-1);
	}
	else if (B[tengah]<target) {
		return bs(tengah+1,b);
	}
}

int main(){
	OPTIMASI;
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n >> m >> k;
		for (i = 0 ; i < n ; i ++) cin >> A[i];
		for (i = 0 ; i < m ; i++) cin >> B[i];
		sort(A,A+n); sort(B,B+m);
		int ans = 0 ;
		for (i = 0 ; i < n ; i++) {
			if (A[i]>=k) ans += m;
			else if (A[i]+B[m-1]<k) {}
			else {
				target = k-A[i];
				temp = m-1;
				ans += m-1-(bs(0,m-1))+1;
			}
		}
		cout << "Kasus #" << ++tc << ": " << ans << '\n';
	}
	return 0;
}