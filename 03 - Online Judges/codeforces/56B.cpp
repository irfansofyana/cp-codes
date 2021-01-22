#include <bits/stdc++.h>
using namespace std;

int n,i,j,depan,belakang;
int A[1005];
int B[1005],idx;
bool ans;

int main(){
	cin.tie(0);
	cin >> n;
	for (i=1;i<=n;i++) 
		cin >> A[i];
	i = 1;
	ans = false;
	while (i<=n) {
		while (A[i]<A[i+1] && i<=n-1) i++;
		if (i==n || ans) break;
		else {
			depan = A[i];
			ans = true;
			while (A[i]>A[i+1] && i<=n-1) i++;
			belakang = A[i];
		}
	}
	if (!ans) cout << 0 << " " << 0 << endl;
	else {
		idx = 1;
		for (i=1;i<=belakang-1;i++) {
			B[idx] = i;
			idx++;
		}
		for (i=depan;i>=belakang;i--) {
			B[idx] = i;
			idx++;
		}
		for (i=depan+1;i<=n;i++) {
			B[idx] = i;
			idx++;
		}
		for (i=1;i<=n;i++) {
			if (A[i]!=B[i]) break;
		}
		if (i==n+1) cout << belakang << " " << depan << endl;
		else cout << 0 << " " << 0 << endl;
	}
}
