#include <bits/stdc++.h>
using namespace std;

int t,i,j;
int n,m;
bool arr[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(arr,false,sizeof arr);
		for (i = 0 ; i < m ; i++){
			cin >> j;
			arr[j] = true;
		}
		vector<int> ass,chef;
		bool cek = true;
		for (i = 1 ; i <= n ; i++) {
			if (!arr[i]) {
				if (cek) {
					cek = false;
					chef.push_back(i);
				}
				else {
					cek = true;
					ass.push_back(i);
				}
			}
		}
		for (i = 0 ; i < chef.size(); i++){
			cout << chef[i] ;
			if (i!=(int)chef.size()-1) cout << " ";
		}
		cout << '\n';
		for (i = 0 ; i < ass.size(); i++){
			cout << ass[i] ;
			if (i!=(int)ass.size()-1 ) cout << " ";
		}
		cout << '\n';
	}
	return 0;
}