#include <bits/stdc++.h>
using namespace std;

char A[5][5],B[5][5];
int n,m,i,j,k,l;

pair<int,int> cari(int x){
	int xx,yy;
	xx = x/n;
	yy = x%n;
	return make_pair(xx,yy);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n, n > 0) {
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < n ; j++)
				cin >> A[i][j];
		m = n*n;
		int ans = -1;
		for (i = 0; i < (1<<m); i++){
			vector<int> ambil;
			bool kandidat = true;
			for (j = 0 ; j < m ; j++){
				if ((i&(1 << j)) > 0) {
				//	if (i==4) cout << j << " " << cari(j).first << " " << cari(j).second << '\n';
					if (A[cari(j).first][cari(j).second]=='X') {
						kandidat = false;
						break;
					}
					else ambil.push_back(j);
				}
			}
			if (kandidat) {
				for (j = 0 ; j < (int)ambil.size()-1 ; j++){
					for (k = j + 1 ; k < (int)ambil.size(); k++){
						int x1,y1,x2,y2;
						x1 = cari(ambil[j]).first; y1 = cari(ambil[j]).second;
						x2 = cari(ambil[k]).first; y2 = cari(ambil[k]).second;
						if (x1==x2 || y1==y2) {
							bool _can1 = false;
							bool _can2 = false;
							if (x1==x2) {
								//bool _can1 = false;
								for (l = y1+1; l <= y2-1 ; l++) {
									if (A[x1][l]=='X') {_can1 = true; break;}
								}
							}
							else if (y1==y2) {
								for (l = x1+1; l <= x2-1 ; l++) {
									if (A[l][y1]=='X') {_can2 = true; break;}
								}
							}
							if (_can1==false && _can2==false) {kandidat = false; break;}
						}
					}
					if (!kandidat) break;
				}
				if (kandidat) ans = max(ans,(int)ambil.size());
			}
		}
		cout << ans << '\n';
	}
	return 0;
}