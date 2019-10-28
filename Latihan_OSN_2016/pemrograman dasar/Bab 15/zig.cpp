#include <bits/stdc++.h>
using namespace std;

int n,i;
int A[10];

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) A[i] = i+1;
	//if (n < 3) return 0;
	do {
		i = 2; bool cek = true;
		while (i < n) {
			if (!((A[i-1] < A[i-2] && A[i-1] < A[i]) || (A[i-1] > A[i-2] && A[i-1] > A[i]))) {
				cek = false;
				break;
			}
			else i++;
		}
		if (cek) {
			for (i = 0 ; i < n ; i++) cout << A[i];
			cout << '\n';
		}
	}while (next_permutation(A,A+n));
	return 0;
}