#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,m;
int A[10];
int i,j;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> m >> n;
		for (i = 0 ; i < m ; i++) A[i] = i+1;
		j = 0;
		do {
			j++;
			if (j==n) {
				for (i = 0 ; i < m ; i++){
					if (i==m-1) cout << A[i] << '\n';
					else cout << A[i] << " ";
				}
				break;
			}
		}while (next_permutation(A,A+m));
	}
	return 0;
}