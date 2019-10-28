#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef pair<int,int> pi;

string s,ss;
int t,i,j;
int a,b;
int ans;
pi kiri_atas,kanan_bawah;
int arr[34][34];

void Quadtree(int& idx,pi kiri_atas,pi kanan_bawah,int ukuran,string st){
	if (idx < st.size()){
		if (st[idx] == 'p'){
			int ukuran_next = (ukuran/2);
			pi kanan_bawah_2 = {(kiri_atas.fi + kanan_bawah.fi)/2,(kiri_atas.se + kanan_bawah.se)/2};
			pi kiri_atas_1 = {(kanan_bawah_2.fi - ukuran_next + 1), (kanan_bawah_2.se + 1)};
			pi kanan_bawah_1 = {kiri_atas_1.fi + ukuran_next - 1, kiri_atas_1.se + ukuran_next - 1};
			pi kiri_atas_3 = {kanan_bawah_2.fi + 1, kanan_bawah_2.se - ukuran_next + 1};
			pi kanan_bawah_3 = {kiri_atas_3.fi + ukuran_next - 1, kiri_atas_3.se + ukuran_next - 1};
			pi kiri_atas_4 = {kanan_bawah_2.fi + 1, kanan_bawah_2.se + 1};
			pi kanan_bawah_4 = {kiri_atas_4.fi + ukuran_next - 1, kiri_atas_4.se + ukuran_next - 1};
			idx++;
			//cout << "bug" << endl;
			//cout << idx << endl;
			//cout << kiri_atas_1.fi << " " << kiri_atas_1.se << " " << kanan_bawah_1.fi << " " << kanan_bawah_1.se << endl;
			Quadtree(idx,kiri_atas_1,kanan_bawah_1,ukuran_next, st);
			//cout << idx << endl;
			Quadtree(idx,kiri_atas, kanan_bawah_2, ukuran_next, st);
			//cout << idx << endl;
			Quadtree(idx,kiri_atas_3, kanan_bawah_3, ukuran_next, st);
			//cout << idx << endl;
			Quadtree(idx,kiri_atas_4, kanan_bawah, ukuran_next, st);
			//cout << idx << endl;
		}
		else {
			//cout << idx << endl;
			//cout << kiri_atas.fi << " " << kiri_atas.se << " " << kanan_bawah.fi << " " << kanan_bawah.se << endl;
			for (int z = kiri_atas.fi ; z <= kanan_bawah.fi; z++) {
				for (int zz = kiri_atas.se ; zz <= kanan_bawah.se; zz++){
					if (st[idx] == 'f') {
						arr[z][zz] = 1;
					}
					else if (st[idx] == 'e') {
						if (arr[z][zz] == -1) arr[z][zz] = 0;
					}
				}
			}
			idx++;
			return;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s >> ss;
		a = 0; b = 0;
		memset(arr,-1,sizeof arr);
		Quadtree(a,{0,0},{31,31},32,s);
		/*for (i = 0 ; i < 8; i++) {
			for (j = 0 ; j < 8 ; j++)
				cout << arr[i][j];
			cout << '\n';
		}
		cout << '\n'; */
		a = 0;
		Quadtree(a,{0,0},{31,31},32,ss);
		/*for (i = 0 ; i < 4; i++) {
			for (j = 0 ; j < 4; j++)
				cout << arr[i][j];
			cout << '\n';
		}*/
		ans = 0;
		for (i = 0 ; i < 32 ; i++) {
			for (j = 0 ; j < 32 ; j++) {
				ans += (arr[i][j] == 1 ? 1:0);
			}
		}
		cout << "There are " << ans << " black pixels.\n";
	}
	return 0;
}