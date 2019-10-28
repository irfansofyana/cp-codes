#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,a,b;
int tc;
int A[100005],B[100005];

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n >> m;
		for (i = 0 ; i < n ; i++)
			cin >> A[i];
		for (i = 0 ; i < m ; i++)
			cin >> B[i];
		sort(A,A+n); sort(B,B+m);
		a = 0; b = 0;
		for (i = 0 ; a<n && b<m; i++) {
			if (A[a]<B[b]) {
				a++;
			} 
			else if (A[a]>=B[b]) {
				b++;
			}
		}
		if (a==n) puts("MechaGodzilla");
		else if (b==m) puts("Godzilla");
		else puts("uncertain");
	} 
	return 0;
}
