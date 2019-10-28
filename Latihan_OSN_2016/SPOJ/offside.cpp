#include <bits/stdc++.h>
using namespace std;

int A[15],D[15];
int a,d,n,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> a >> d ){
		if (a==0 && d==0) return 0;
		for (i = 0 ; i < a ; i++) cin >> A[i];
		for (i = 0 ; i < d; i++) cin >> D[i];
		sort(A,A+a); sort(D,D+d);
		bool ans = false;
		for (i = 0 ; i < a ; i++) {
			if (A[i] < D[1]) {
				ans = true;
				break;
			} 
		}
		cout << (ans?"Y\n":"N\n");
	}
	return 0;
}