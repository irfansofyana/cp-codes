#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j,m;
int ans;
string temp;

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--){
		cin >> n >> m;
		ans = 0;
		for (i = n ; i<=m; i++) {
			temp = ubah(i);
			//cout << temp << '\n';
			int smt = 0;
			for (j = 0 ; j < temp.size(); j++) {
				if (temp[j]!='7' && temp[j]!='8') smt++;
			}
			if (smt<=1) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}