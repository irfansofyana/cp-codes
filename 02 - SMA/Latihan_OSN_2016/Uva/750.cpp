#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int x,y,idx,indeks;
int n,m,i,j;
pi arr[10];
int answ;

bool bisa(int x,int y){
	for (int z = 0 ; z < idx; z++) {
		int xx = arr[z].first;
		int yy = arr[z].second;
		if (xx==x || yy==y || abs(xx-x)==abs(yy-y)) return false;
	}
	return true;
}

vector<int> jaw[1005];

bool comp(vector<int> a,vector<int> b){return a < b;}

void generate(int kolom){
	if (kolom==8) {
		int ans[10];
		for (int z = 0 ; z < 8; z++) {
			ans[arr[z].first] = arr[z].second;
		}
		vector<int> smt;
		for (int z = 0 ; z < 8 ; z++) {
			smt.push_back(ans[z]);
		}
		jaw[indeks] = smt;
		indeks++;
	}
	else {
		for (int z = 0 ; z < 8 ; z++) {
			if (bisa(z,kolom)) {
				arr[idx] = make_pair(z,kolom);
				idx++;
				generate(kolom + 1);
				idx--;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	indeks = 0;
	generate(0);
	sort(jaw,jaw+indeks,comp);
	cin >> t;
	while (t--) {
		cin >> x >> y;
		x--; y--;
		idx = 0; answ = 0;
		cout << "SOLN       COLUMN\n";
		cout << " #      1 2 3 4 5 6 7 8\n\n";
		int prin = 0;
		for (i = 0 ; i < indeks; i++) {
			bool _can = false;
			for (j = 0 ; j < jaw[i].size(); j++){
				if (jaw[i][y]==x) {
					_can = true;
					break;
				}
			}
			if (_can) {
				int tc = ++prin;
				if ((tc) < 10) cout << " " << tc << "      ";
				else cout << tc 	<< "      ";
				for (j = 0 ; j < jaw[i].size(); j++) {
					cout << jaw[i][j] + 1;
					cout << (j==(int)jaw[i].size()-1 ? '\n' : ' ');
				}
			}
		}
		if (t!=0) cout << '\n';
	}
	return 0;
}