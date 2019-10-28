#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int n;

int main(){
	OPTIMASI
	while (cin >> n && n>0) {
		cout << (n*(n+1)*(2*n+1))/6 << '\n';
	}
	return 0;
}