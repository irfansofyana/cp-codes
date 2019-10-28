#include <bits/stdc++.h>
using namespace std;

int a,b,c,i;
int A[5]={10,14,18,25},B[5]={40,60,80,100},C[5]={90,120,180,220};

int main(){
	cin >> a >> b >> c;
	for (i = 0 ; i < 4 ; i++) {
		if (a<=A[i] && b<=B[i] && c<=C[i]) {
			if (i==0) cout << 'S';
			else if (i==1) cout << 'M';
			else if (i==2) cout << 'L';
			else cout << 'X';
			cout << '\n';
			return 0;
		}
	}
	if (i==4) cout << 'X' << '\n';
	return 0;
}