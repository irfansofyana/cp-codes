#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int A[200005],B[200005];
int depan,belakang;

int main(){
	OPTIMASI
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	for (i = 0 ; i < m ; i++) {
		int x;
		cin >> x;
		depan = 0; belakang = n-1;
		int ans = -1;
		while (depan<=belakang) {
			int tengah = (depan+belakang)/2;
			if (A[tengah]<=x) {
				ans = tengah;
				depan = tengah+1;
			}
			else belakang = tengah-1;
		}
		if (ans!=-1) B[i] = ans+1;
		else B[i] = 0;
	}
	for (i = 0 ; i < m ; i++) {
		cout << B[i];
		if (i==m-1) cout << '\n';
		else cout << " ";
	}
	return 0;
}