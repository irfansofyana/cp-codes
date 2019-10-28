#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
int A[110];
int biaya;

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n;
		A[0] = 1;
		for (i = 1 ; i <= n ; i++) {
			int x;
			cin >> x;
			A[i] = A[i-1]*x;
		}
		biaya = 0;
		for (i = 1 ; i<=n ; i++) {
			int x;
			cin >> x;
			biaya += x*A[i];
		}
		cout << "Kasus #" << ++tc << ": " << biaya << '\n';
	}
	return 0;
}