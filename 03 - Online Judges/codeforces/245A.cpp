#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int a[2],b[2];
int A,B;
int x,y,z;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x >> y >> z;
		if (x==1) {
			A++;
			a[0] += y; a[1] += z;
		}
		else {
			B++;
			b[0] += y; b[1] += z;
		}
	}
	(a[0]>=5*A) ? cout << "LIVE\n" : cout << "DEAD\n";
	(b[0]>=5*B) ? cout << "LIVE\n" : cout << "DEAD\n";
	return 0;
}