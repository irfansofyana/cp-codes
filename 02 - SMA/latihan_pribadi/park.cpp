#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int A[110];
int ans,x,y,a,b,c;

int main(){
	OPTIMASI
	cin >> a >> b >> c;
	for (i = 1 ; i <= 3 ; i++) {
		cin >> x >> y;
		for (j = x ; j<=y-1; j++) 
			A[j]++;
	}
	for (i = 1 ; i<=100; i++) {
		if (A[i]==1) ans += a;
		else if (A[i]==2) ans += 2*b;
		else if (A[i]==3) ans += 3*c;
	}
	cout << ans << '\n';
	return 0;
}