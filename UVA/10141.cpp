#include <bits/stdc++.h>
using namespace std;

int t,tc,n,i,j,m,r,maks;
string s,nama,ans;
double harga,mini;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bool fi = true;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) return 0;
		if (fi) fi = false;
		else cout << '\n';
		getline(cin,s);
		for (i = 0 ; i < n ; i++) {
			getline(cin,s);
			//cout << s << endl;
		}
		//cout << "masuk" << endl;
		for (i = 0 ; i < m ; i++) {
			getline(cin,s);
			//cout << s << endl;
			cin >> harga >> r;
			//cout << harga << " " << r << endl;
			getline(cin,nama);
			for (j = 0 ; j < r ; j++) {
				getline(cin,nama);
				//cout << nama << endl;
			}
			if (i==0) {
				ans = s; mini = harga; maks = r;
			}
			else if (r>maks) {
				ans = s; mini = harga; maks = r;
			}
			else if (r==maks) {
				if (harga<mini) {
					ans = s; mini = harga; maks = r;
				}
			}
		}
		cout << "RFP #" << ++tc << '\n';
		cout << ans << '\n';
	}
	return 0;
}