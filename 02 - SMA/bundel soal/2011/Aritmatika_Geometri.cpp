#include <bits/stdc++.h>
using namespace std;

int a,b,c;
int tc;

int main(){
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d %d %d", &a, &b, &c);
		if (2*b==a+c) cout << 2*c-b << endl;
		else cout << c*(c/b) << endl;
	}
	return 0;
}
