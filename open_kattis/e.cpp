#include <bits/stdc++.h>
using namespace std;

int n,i,j;
bool A[105];
int m;

int main(){
	cin >> n >> m;
	for (i = 0 ; i < m ; i++) {
		cin >> j;
		A[j] = true;
	}
	for (i = 1 ; i <= n ; i++) {
		if (!A[i]) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << "too late\n";
}