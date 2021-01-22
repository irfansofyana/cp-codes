#include <bits/stdc++.h>
using namespace std;

int n,m;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin >> n >> m) {
		if (n==0 && m==0) break;
		cout << (n/m) << " " << n-(n/m)*m << " / " << m << '\n';
	}
	return 0;
}