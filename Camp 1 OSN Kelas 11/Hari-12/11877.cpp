#include <bits/stdc++.h>
using namespace std;

int n,ans;

int main(){
	cin.tie(0);
	while (cin >> n && n!=0) {
		ans = 0;
		while (n>=3) {
			ans += (n/3);
			n = (n/3)+n%3;
			if (n==2) n++;
		}
		cout << ans << endl;
	}
	return 0;
}