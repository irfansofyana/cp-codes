#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 3 ; ; i++) {
		if (i*(i+1)>=2*(n+3)) break;
	}
	for (j = 3 ; j <= i ; j++) {
		cout << "mb";
		for (int k = 0 ; k < j-2 ; k++) cout << 'e';
	}
	cout << '\n';
	return 0;
}