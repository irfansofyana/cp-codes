#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m;
int t;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << ((n*(n-1))/2)+m-1 << '\n';
	}
	return 0;
}