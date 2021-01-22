#include <bits/stdc++.h>
using namespace std;

int k,n;
int i,j,x,y,xx,yy;
char c;

int main(){
	cin >> k >> c >> n;
	xx = 0; yy = k-1;
	for (i = 0 ; i < k ; i++) {
		for (j = 0 ; j < k ; j++) {
			if (i==x && j==y) cout << n;
			else if (i==xx && j==yy) cout << n;
			else cout << c;
		}
		cout << '\n';
		x++; y++;
		xx++; yy--;
	}
	return 0;
}