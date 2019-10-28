#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int A[10005];
int n,i,j;

int main(){
	OPTIMASI
	cin >> n;
	memset(A,0,sizeof A);
	for (i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		A[x]++;
	}
	for (i = 1 ; i<= 10000; i++){
		if (A[i]==0) {
			cout << i << '\n';
			return 0;
		}
	}
}