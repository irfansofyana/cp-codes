#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[110],B[110],C[110];
int pos,neg,nol;
int a,b,c;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++){
		cin >> j;
		if (j>0) {pos++; A[a] = j; a++;}
		else if (j==0) {nol++; B[b] = j; b++;}
		else {neg++; C[c] = j; c++;}
	}
	if (pos==n || nol == n || neg==n) {
		if (pos==n) {
			for (i = 0 ; i < pos ; i ++) {
				cout << A[i];
				cout << (i==pos-1?'\n':' ');
			}
		}
		else if (nol==n) {
			for (i = 0 ; i < pos ; i ++) {
				cout << B[i];
				cout << (i==pos-1?'\n':' ');
			}
		}
		else{
			for (i = 0 ; i < pos ; i ++) {
				cout << C[i];
				cout << (i==pos-1?'\n':' ');
			}
		}
	}
	else if (n%2==0 && (n/2)==)
	return 0;
}