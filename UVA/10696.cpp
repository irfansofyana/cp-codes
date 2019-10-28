#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
int n;

int main(){
	OPTIMASI
	while (cin >> n && n>0) {
		cout << "f91(" << n << ") = ";
		if (n>=101) cout << n-10 << endl;
		else cout << 91 << endl;
	}
	return 0;
}