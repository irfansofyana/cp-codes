#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int pos[105][10];
int idx,idy;
int tambah,target,awal;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	idx = n-1; idy = 0;
	tambah = 3; target = 6; awal = 0;
	for (i = 1 ; i <= m ; i++) {
		pos[idx][idy] = i;
		idy += tambah;
		if (idx == 0 && idy == target) {
			idx = n-1;
			awal = 1;
			idy = awal;
			target = 3;
			tambah = 1;
		}
		else if (idy == target) {
			idx--;
			idy = awal;
		}
	}
	/*for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < 4 ; j++){
			cout << pos[i][j] << " ";
		}
		cout << '\n';
	}*/
	vector<int> ans;
	for (i = n-1 ; i >=0 ; i--) {
		if (pos[i][1]!=0) ans.push_back(pos[i][1]);
		if (pos[i][0]!=0) ans.push_back(pos[i][0]);
		if (pos[i][2]!=0) ans.push_back(pos[i][2]);
		if (pos[i][3]!=0) ans.push_back(pos[i][3]);
	}
	for (i = 0 ; i < ans.size(); i++){
		cout << ans[i];
		cout << (i==(int)ans.size()-1 ? '\n' : ' ');
	}
	return 0;
}