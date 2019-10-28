#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[20];

void kombinasi(){
	int a,b,c,d,e,f;
	for (a = 0 ; a < n-5 ; a++) {
		for (b = a+1; b < n-4; b++) {
			for (c = b+1 ; c < n-3 ; c++) {
				for (d = c+1; d < n-2 ; d++) {
					for (e = d+1; e < n-1; e++) {
						for (f = e+1; f < n ; f++) {
							cout << A[a] << " " << A[b] << " " << A[c] << " " << A[d] << " ";
							cout << A[e] << " " << A[f] << '\n';
						}
					}
				}
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bool pertama = true;
	while (cin >> n, n) {
		if (!pertama) cout << '\n';
		else pertama = false;
		for (i = 0 ; i < n ; i++) cin >> A[i];
	//	sort(A,A+n);
		kombinasi();
	}
	return 0;
}