#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int a,b;
int n,sum;

int main(){
	OPTIMASI
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> a;
		sum += a;
	}
	cout << sum << '\n';
	return 0;
}