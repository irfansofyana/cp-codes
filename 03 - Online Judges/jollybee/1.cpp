#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n; i++) {
		cout << i;
		if (i==n-1) cout << '\n';
		else cout << " ";
	}
	return 0;
}