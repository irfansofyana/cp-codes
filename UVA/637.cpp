#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j,k;
int A[105][3];
int tc,t,ukuran;

int main(){
	OPTIMASI
	while (cin >> n && n>0) {
		if (n%4==0) ukuran = (n/4);
		else ukuran = (n/4)+1;
		memset(A,-1,sizeof A);
		j = 1;
		for (i = 1 ; i <= 2*ukuran ; i++) {
			if (i%2==1) {
				if (4*ukuran+1-j>n) A[i][1] = -1;
				else A[i][1] = 4*ukuran+1-j;
				A[i][2] = j; j++;
			}
			else {
				if (4*ukuran+1-j>n) A[i][2] = -1;
				else A[i][2] = 4*ukuran+1-j;
				A[i][1] = j; j++;
			}
		}
		cout << "Printing order for " << n << " pages:" << '\n';
		if (n==1) cout << "Sheet " << n << ", front: Blank, " << 1 << '\n';
		else {
		for (i = 1 ; i<=2*ukuran; i++) {
			if (i%2==0) {
				cout << "Sheet " << i/2 << ", back : ";
				if (A[i][1]==-1) cout << "Blank, ";
				else cout << A[i][1] << ", ";
				if (A[i][2]==-1) cout << "Blank" << '\n';
				else cout << A[i][2] << '\n';
			}
			else {
				cout << "Sheet " << (i/2)+1 << ", front: ";
				if (A[i][1]==-1) cout << "Blank, ";
				else cout << A[i][1] << ", ";
				if (A[i][2]==-1) cout << "Blank" << '\n';
				else cout << A[i][2] << '\n';
			}
		}
		}
	}
	return 0;
}