#include <bits/stdc++.h>
using namespace std;

int t,n;
int A[10],B[10];
int i,j,k;

int main(){
	cin >> n;
	for (i = 0 ; i<n ; i++){
		A[i] = i+1;
	}
	int ans = 0;
	do{
		bool temp = true;
		for (i = 0 ; i < n && temp; i++) {
			for (j = i+1 ; j < n && temp ; j++) {
				for (k = j+1; k < n && temp; k++) {
					if (A[i]<A[j] && A[j]<A[k]) {
						temp = false;
						break;
					}  
				}
			}
		}
		if (temp) {
			B[A[0]]++;
			ans++;
		}
	}while (next_permutation(A,A+n));
	cout << ans << '\n';
	return 0;
}