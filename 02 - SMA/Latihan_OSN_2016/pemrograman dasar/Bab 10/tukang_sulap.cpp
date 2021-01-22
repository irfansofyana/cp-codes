#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[1005],B[1005];
char a,b;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	for (i = 0 ; i < n ; i++) cin >> B[i];
	int Q;
	cin >> Q;
	while (Q--) {
		int x,y;
		cin >> a >> x >> b >> y;
		x--; y--;
		if (a==b) {
			if (a=='A') {
				swap(A[x],A[y]);
			}
			else {
				swap(B[x],B[y]);
			}
		}
		else {
			if (a=='A') swap(A[x],B[y]);
			else if (a=='B') swap(B[x],A[y]);
		}
	}
	for (i = 0 ; i < n ;i++) {
		cout << A[i];
		cout << (i==n-1 ? '\n': ' ');
	}
	for (i = 0 ; i < n ; i++) {
		cout << B[i];
		cout << (i==n-1 ? '\n':' ');
	}
	return 0;
}