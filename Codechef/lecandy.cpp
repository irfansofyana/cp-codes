#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> c;
		int sum = 0;
		for (i = 0 ; i < n ; i++) {cin >> j; sum += j;}
		cout << (sum<=c?"Yes":"No") << '\n';
	}
	return 0;
}