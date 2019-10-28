#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
int A[200005],B[200005];
int m;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0; i < n ; i++) cin >> A[i];
		cin >> m;
		for (i = 0 ; i < m ; i++) cin >> B[i];
		int idx = 0; i = 0;
		bool ans = false;
		while (i<n) {
			if (A[i]==B[idx] && !ans) {
				int frek = 1; j = i+1; int k = idx+1;
				while (j<n && k<m) {
					if (A[j]==B[k]) {
						j++; k++; frek++;
					}
					else break;
				} 
				if (frek==m) {
					ans = true;
				}
				else idx = 0;
				i = j;
			}
			else i++;
		}
		cout << (ans?"Yes":"No") << '\n';
	}
	return 0;
}