#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int sum,x;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		sum += x;
	}
	cout << (sum%n == 0 ? n : n-1) << '\n';
	return 0;
}
