#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
int n,m,i,j,x,y;
int A[15],B[15];
ll a,b,c,d;

int main(){
	OPTIMASI
	cin >> n >> x;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i];
	}
	cin >> m >> y;
	for (i = 0 ; i < m ; i++) {
		cin >> B[i];
	}
	c = 1;
	for (i = n-1 ; i>=0 ; i--) {
		a += c*A[i];
		c *= x;
	}
	d = 1;
	for (i = m-1 ; i>=0 ; i--) {
		b += d*B[i];
		d *= y;
	}
	if (a==b) cout << '=' << '\n';
	else if (a>b) cout << '>' << '\n';
	else cout << '<' << '\n';
	return 0;
}