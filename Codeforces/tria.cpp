#include <bits/stdc++.h>
using namespace std;

int a[3],b[3];
int i;

int main(){
	for (i = 0 ; i < 3; i++) cin >> a[i];
	for (i = 0 ; i < 3 ; i++) cin >> b[i];
	sort(a,a+3); sort(b,b+3);
	if (a[2]*a[2]==a[0]*a[0]+a[1]*a[1]) {
		for (i = 0 ; i < 3; i++) {
			if (a[i]!=b[i]) {
				cout << "NO" << '\n';
				return 0;
			}
		}
		cout << "YES" << '\n'; return 0;
	}
	cout << "NO" << '\n';
	return 0;
}