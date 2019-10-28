#include <bits/stdc++.h>
using namespace std;

int t,tc,n,i,j;
int bil,x,y;
vector<int> ans;
string temp,st,smt;

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int ubahh(string s){
	stringstream ss(s);
	int res;
	return ss >> res ? res : 0;
}

void pre_compute(){
	for (i = 2 ; i <= 40000; i++) {
		bil = i*i;
		temp = ubah(bil);
		st = "";
		for (j = 0 ; j < (int)temp.size()-1; j++) {
			st = st + temp[j];
			smt = temp.substr(j+1,(int)temp.size()-(j+1));
			int xx = ubahh(st);
			int yy = ubahh(smt);
			if (xx > 0 && yy > 0 && xx + yy == i) {
				ans.push_back(i);
				break;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre_compute();
	cin >> t;
	while (t--) {
		cin >> x >> y;
		int lo = lower_bound(ans.begin(), ans.end(), x) - ans.begin();
		int hi = upper_bound(ans.begin(), ans.end(), y) - ans.begin();
		hi--;
		cout << "case #" << ++tc << '\n';
		for (i = lo ; i<=hi ; i++) {
			cout << ans[i] << '\n';
		}
		if (lo > hi) cout << "no kaprekar numbers\n";
		if (t > 0) cout << '\n';
	}
	return 0;
}
