#include <bits/stdc++.h>
using namespace std;

int n,i;

int main(){
	cin >> n;
	for (i = n ; i >= 1; i--) {
		if (n%i==0) cout << i << '\n';
	}
	return 0;
}