#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll k;
int t;
int ans[4]={192,442,692,942};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> k;
		ll temp;
		if (k%4==0) temp = (k/4)-1;
		else temp = (k/4);
		cout << 1000*temp+ans[(k%4==0?3:(k%4)-1)] << '\n';
	}
	return 0;
}