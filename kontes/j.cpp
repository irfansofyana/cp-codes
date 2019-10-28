#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m && (n||m)){
		int sisa = (n%m);
		cout << (n/m) << " " << sisa << " / " << m << '\n';
	}
	return 0;
}