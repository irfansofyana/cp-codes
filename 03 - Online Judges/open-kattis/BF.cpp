#include <bits/stdc++.h>
#define OPTIMASI ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n,i,j,x;
int A[10],B[110];

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++){
		cin >> x;
		B[x] = i+1;
		A[x]++;
	}
	for (i = 6 ; i>= 1 ; i--) {
		if (A[i]==1) break;
	}
	if (i==0) puts("none");
	else cout << B[i] << endl;
	return 0;
}