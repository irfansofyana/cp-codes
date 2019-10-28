#include <bits/stdc++.h>
using namespace std;

int n,i;

int main(){
	cin >> n;
	for (i = 1 ; i <= n ; i++) {
		if (i%10==0) continue;
		else if (i==42) {
			cout << "ERROR\n"; return 0;
		}
		else cout << i << '\n';
	}
	return 0;
}