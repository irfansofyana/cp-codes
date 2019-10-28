#include <bits/stdc++.h>
using namespace std;

int t,tc,n,i,j;
int q;
long long A[100005];
long long x;

bool bisa(long long depan,long long belakang,long long bil) {
	long long mid = (depan+belakang)/2;
	if (depan>belakang) return false;
	else if (A[mid]==bil) return true;
	else if (A[mid]>bil) return bisa(depan,mid-1,bil);
	else if (A[mid]<bil) return bisa(mid+1,belakang,bil);
}

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n; i++) cin >> A[i];
		sort(A,A+n);
		cout << "Kasus #" << ++tc <<":" << '\n';
		cin >> q;
		for (i = 0 ; i < q ; i++) {
			cin >> x;
			if (bisa(0,n-1,x)) cout << "ADA" << '\n';
			else cout << "TIDAK ADA" << '\n';
		}
	}
	return 0;
}