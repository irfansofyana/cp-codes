#include <bits/stdc++.h>
using namespace std;

int tc;
int n,i,j,k;
int sum[200005],arr[200005];
string s;

void update(int idx,int val){
	while (idx <= n) {
		sum[idx] += val;
		idx += (idx&(-idx));
	}
}

int query(int idx){
	int ret = 0;
	while (idx > 0) {
		ret += sum[idx];
		idx -= (idx&(-idx));
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bool fi = true;
	while (cin >> n) {
		if (n == 0) return 0;
		if (fi) fi = false;
		else cout << '\n';
		memset(sum,0,sizeof sum);
		for (i = 1; i <= n ; i++) {
			cin >> j;
			arr[i] = j;
			update(i,j);
		}
		cout << "Case " << ++tc << ":\n";
		while (cin >> s) {
			if (s == "END") break;
			else if (s == "S") {
				cin >> i >> j;
				update(i,j - arr[i]);
				arr[i] = j;
			}
			else {
				cin >> i >> j;
				cout << query(j) - query(i-1) << '\n';
			}
		}
	}
	return 0;
}