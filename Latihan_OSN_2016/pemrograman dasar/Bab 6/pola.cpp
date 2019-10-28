#include <bits/stdc++.h>
using namespace std;

int n,x;
int i;

int main(){
	cin >> n >> x;
	for (i = 1 ; i <= n ; i++) {
		if (i%x==0) cout << '*';
		else cout << i;
		cout << (i==n ? '\n':' ');
	}
	return 0;
}