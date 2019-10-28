#include <bits/stdc++.h>
using namespace std;

int x;
double uang;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x >> uang;
	cout << fixed << showpoint << setprecision(2);
	if (x%5 == 0) {
		if (uang-x-0.50 < 0) cout << uang << '\n';
		else cout << uang-x-0.50 << '\n';
	}
	else {
		cout << uang << '\n';
	}
	return 0;
}
