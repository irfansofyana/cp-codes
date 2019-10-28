#include <bits/stdc++.h>
#define pb push_back

using namespace std;
vector<int> ans;

int sum(int x){
	int res = 0;
	while (x > 0) {
		res += x%10;
		x /= 10;
	}
	return res;
}

void cari(){
	for (int i = 1 ; i <= 12000000; i++) {
		if (sum(i) == 10) ans.pb(i);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	cari();
	//cout << (int)ans.size()  << '\n';
	cout << ans[n-1] << '\n';
	return 0;
}