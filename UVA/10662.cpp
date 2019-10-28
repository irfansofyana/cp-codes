#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,r,h;
ll spasi,sblm,i,j,k;
string s;
vector<ll> travel,resto,hotel;
int tr[25][25];
int ht[25][25];
int rh[25][25];
ll ft,fr,fh,tot;

ll ubah(string s){
	stringstream ss(s);
	ll res;
	return ss>>res?res:0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	getline(cin,s);
	while (1){
		if (s.size()==0) break;
		spasi = s.find(" ",0); sblm = spasi+1;
		t = ubah(s.substr(0,spasi)); 
		spasi = s.find(" ",sblm); 
		r = ubah(s.substr(sblm,spasi-sblm)); sblm  = spasi+1;
		h = ubah(s.substr(sblm,(int)s.size()-sblm));
		travel.clear(); resto.clear(); hotel.clear();
		ll temp;
		for (i = 0 ; i < t; i++) {
			cin >> temp;
			travel.push_back(temp);
			for (j = 0 ; j < r ; j++) {
				cin >> tr[i][j];
			}
		}
		for (i = 0 ; i < r; i++) {
			cin >> temp;
			resto.push_back(temp);
			for (j = 0 ; j < h; j++) {
				cin >> rh[i][j];
			}
		}
		for (i = 0 ; i < h ; i++){
			cin >> temp;
			hotel.push_back(temp);
			for (j = 0 ; j < t; j++) {
				cin >> ht[i][j];
			}
		}
		bool CAN = false;
		for (i = 0 ; i < t ; i++) {
			for (j = 0 ; j < r; j++) {
				for (k = 0; k < h; k++) {
					if (tr[i][j]==0 && rh[j][k]==0 && ht[k][i]==0) {
						if (!CAN) {
							ft = i; fr = j; fh = k;
							tot  = travel[i]+resto[j]+hotel[k];
						}
						CAN = true;
						if (travel[i]+resto[j]+hotel[k]<tot) {
							ft = i; fr = j; fh = k;
							tot  = travel[i]+resto[j]+hotel[k];
						}
					}
				}
			}
		}
		if (!CAN) cout << "Don't get married!" << '\n';
		else cout << ft << " " << fr << " " << fh << ":" << tot << '\n';
		getline(cin,s);
		getline(cin,s);
	}
	return 0;
}