#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int x;

int main(){
	cin >> n;
	for (i = 1 ; i <= n ; i++) {
		for (j = 1 ; j <= i ; j++) {
			cout << x%10;
			x++;
		}
		cout << '\n';
	}
}