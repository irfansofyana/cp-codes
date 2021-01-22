#include <bits/stdc++.h>
using namespace std;

int n,sum,i;
int j;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		sum += j;
	}
	cout << sum << '\n';
}
