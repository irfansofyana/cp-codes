#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,t;
char A[205][205];
string s[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	n = 0;
	m = t;
	for (i = 0 ; i < t; i++) {
		cin >> s[i];
		n = max(n,(int)s[i].size());
	}
	int idx = 0;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			if ((int)s[j].size()>=i+1) {
				if (j%2==0) A[i][j] = s[j][idx];
				else if (j%2==1) A[i][j] = s[j][(int)s[j].size()-1-idx];
			}
			else A[i][j] = '*';
		}
		idx++;
	}
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			cout << (A[i][j]=='*'?' ':A[i][j]);
			cout << (j==m-1?'\n':' ');
		}
	}
	return 0;
}