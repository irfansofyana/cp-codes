#include <bits/stdc++.h>
using namespace std;

int n,i,j,money,m;
string s,nama[15];
map<string,int> urutan;
int ans[15];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bool pertama = true;
	while (cin >> n){
		if (pertama) pertama = false;
		else cout << '\n';
		urutan.clear();
		memset(ans,0,sizeof ans);
		for (i = 0 ; i < n ; i++) {
			cin >> s;
			urutan[s] = i;
			nama[i] = s;
		}
		for (i = 0 ; i < n ; i++) {
			cin >> s >> money >> m;
			if (m != 0) {
				ans[urutan[s]] -= (money-(money%m));
				for (j = 0 ; j < m ; j++) {
					cin >> s;
					ans[urutan[s]] += money/m;
				}
			}
		}
		for (i = 0 ; i < n ; i++) {
			cout << nama[i] << " " << ans[i] << '\n';
		}
	}
	return 0;
}