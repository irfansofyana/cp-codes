#include <bits/stdc++.h>
using namespace std;

int i,n,a,b;
int temp;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> n;
	a = 0; b = 1;
	for (i = 2 ; i <= n ; i++) {
		temp = a;
		a = b; b = temp+b;
	}
	cout << a << " " << b << '\n';
	return 0;
}