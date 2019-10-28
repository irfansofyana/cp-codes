#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int A[6];
int n,i,j;
bool ans;
int ambil[6];

void jelajah(int idx,int sum) {
	int z;
	if (idx==5) {
		if (sum==23) {
			ans = true;
			for (z = 1; z <= 4 ; z++) {
				cout << ambil[z] << " ";
			}
			cout << '\n';
		}
	}
	else {
		for (z = 1 ; z <= 3 ; z++) {
		if (z==1) {
			ambil[idx] = 1;
			jelajah(idx+1,sum+A[idx]);
		}
		else if (z==2) {
			ambil[idx] = 2;
			jelajah(idx+1,sum-A[idx]);
		}
		else if (z==3) {
			ambil[idx] = 3;
			jelajah(idx+1,sum*A[idx]);
		}
	}
	}
}

int main(){
	OPTIMASI
	while (cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4] && A[0]>0 && A[1]>0 && A[2]>0 && A[3]>0 && A[4]>0) {
		ans = false;
		sort(A,A+5);
		do {
			ans = false;
			jelajah(1,A[0]);
			if (ans) {
				puts("Possible");
				break;
			}
		}while (next_permutation(A,A+5));
		if (!ans) puts("Impossible");
	}
	return 0;
}
