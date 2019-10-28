#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 1 ; i <= n ; i++) {
		cin >> A[i];
	}
	for (i = 1 ; i <= n ; i++) {
		if (A[i]==i) j++;
	}
	cout << j << '\n';
	return 0;
}