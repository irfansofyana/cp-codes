#include <bits/stdc++.h>
using namespace std;

int a,b,c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> a >> b >> c && (a!=0 || b!=0 || c!=0)) {
		if (b-a==c-b) {
			cout << "AP " << c+c-b << '\n';
		}
		else {
			cout << "GP " << c*(c/b) << '\n';
		}
	}
	return 0;
}