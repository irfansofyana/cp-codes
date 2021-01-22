#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

long long t,a,b,c;

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> a >> b >> c;
		cout << "Kasus #" << ++tc << ": ";
		if (a+b==c) cout << '+';
		else if (a-b==c) cout << '-';
		else if (a*b==c) cout << '*';
		else if (b!=0 && a%b==0 && (a/b)==c) cout << '/';
		else cout << "TIDAK ADA SOLUSI";
		cout << '\n';
	}
	return 0;
}