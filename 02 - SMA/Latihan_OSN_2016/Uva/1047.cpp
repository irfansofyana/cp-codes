#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int suka[1005],nilai[1005];
int banyak_relasi;
vector<int> relasi[1005];
int ambil[1005];
int idx;

struct paket{
	vector<int> barisan;
	int sum;
};

vector<paket> ans;

void kombinasi(int pos,int bef){
	if (pos==m) {
		int _nilai = 0;
		bool diambil[1005];
		memset(diambil,false,sizeof diambil);
		for (int z = 0 ; z < m ; z++)
			diambil[ambil[z]] = true;
		for (int z = 0 ; z < banyak_relasi; z++) {
			int xx = 0;
			for (int zz = 0 ; zz < relasi[z].size(); zz++){
				if (diambil[relasi[z][zz]]) xx++;
			}
			if (xx > 1) {
				if (xx%2==0) _nilai -= (nilai[z]);
				else _nilai += (nilai[z]);
			}
		}
		vector<int> smt;
		for (int z = 0 ; z < m ; z++) {
			_nilai += suka[ambil[z]];
			smt.push_back(ambil[z]);
		}
		paket kk;
		kk.barisan = smt;
		kk.sum = _nilai;
		ans.push_back(kk);
	}
	else {
		for (int z = bef + 1 ; z < n - m + pos + 1; z++) {
			ambil[pos] = z;
			kombinasi(pos + 1, z);
		}
	}
}

bool comp(paket a,paket b){
	if (a.sum==b.sum) return a.barisan < b.barisan;
	return a.sum > b.sum;
}

int tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m){
		if (n==0 && m==0) return 0;
		for (i = 0 ; i < n ; i++) cin >> suka[i];
		cin >> banyak_relasi;
		for (i = 0 ; i < 1005; i++) relasi[i].clear();
		for (i = 0 ; i < banyak_relasi; i++) {
			int x;
			cin >> x;
			for (j = 0 ; j < x; j++){
				int y;
				cin >> y;
				y--;
				relasi[i].push_back(y);
			}
			cin >> nilai[i];
		}
		ans.clear();
		kombinasi(0,-1);
		sort(ans.begin(),ans.end(),comp);
		/*for (i = 0 ; i < idx; i++) {
			cout << ans[i].sum << " ";
			for (j = 0 ; j < ans[i].barisan.size(); j++) cout << ans[i].barisan[j] << " ";
			cout << '\n';
		}*/
		cout << "Case Number  " << ++tc << '\n';
		cout << "Number of Customers: " << ans[0].sum << '\n';
		cout << "Locations recommended: " ;
		for (i = 0 ; i < ans[0].barisan.size(); i++){
			cout << ans[0].barisan[i] + 1;
			cout << (i==(int)ans[0].barisan.size()-1 ? '\n' : ' ');
		}
		cout << '\n';
	}
	return 0;
}