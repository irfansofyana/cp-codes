#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	while (scanf("%d", &n)){
		if (n == 0) return 0;
		else if (n == 1) cout << 1 << '\n';
		else if (n == 2) cout << 2 << '\n';
		else {
			n--;
			int ret = 1;
			while (ret <= n) ret <<= 1;
			ret >>= 1;
			cout << 2*(n-ret)+2 << '\n';
		}
	}
}