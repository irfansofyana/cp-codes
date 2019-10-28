#include <bits/stdc++.h>
using namespace std;

char A[10][10];
int n,i,j;
int b,w;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	for (i = 0 ; i < 8 ; i++) {
		for (j = 0 ; j < 8; j++)
			cin >> A[i][j];
	}
	b = 1000; w = 1000;
	for (i = 0 ; i < 8; i++) {
		for (j = 0 ; j < 8 ; j++) {
			if (A[i][j]=='W') {
				int z;
				for (z = 0 ; z < i; z++){
					if (A[z][j]=='B') break;
				}
				if (z==i) w = min(w,i);
			}
			else if (A[i][j]=='B'){
				int z;
				for (z = i+1; z < 8 ; z++) {
					if (A[z][j]=='W') break;
				}
				if (z==8) b = min(b,7-i);
			}
		}
	}
	//cout << b << " " << w << '\n';
	if (b<w) cout << "B" << '\n';
	else cout << "A" << '\n';
	return 0;
}