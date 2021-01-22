#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

int n,m,i,j;
int A[130][130];
int _size;
vector<string> ans;

bool cek(int x,int y){
	return ((x>=0 && x<n) && (y>=0 && y<m));
}

bool _dua(int x){
	if ((x&(x-1))==0) return true;
	return false;
}

void cari(pair<int,int> atas,pair<int,int> bawah,string ret) {
	int a1,a2,b1,b2;
	int ukuran = (bawah.first-atas.first + 1)/2;
	a1 = atas.first; a2 = atas.second ; b1 = bawah.first; b2 = bawah.second;
	pair<int,int> aa1,aa2,aa3,aa4,aa5,aa6,aa7,aa8;
	int acuan;
	bool cek = true;
	for (int z = a1 ; z <= b1; z++){
		for (int zz = a2; zz <= b2; zz++) {
			if (z==a1 && zz == a2) {
				acuan = A[z][zz];
			}
			else if (A[z][zz]!=acuan) {
				cek = false; break;
			}
		}
		if (!cek) break;
	}
	if (cek) {
		if (acuan==0) {}
		else ans.push_back('1'+ret);
	}
	else {
		aa1 = atas;  aa2 = mp((a1+b1)/2,(a2+b2)/2); 	//kanan atas
		aa3 = mp(aa2.first-ukuran+1,aa2.second+1); aa4 = mp(aa2.first,aa2.second+ukuran); //kiri atas
		aa5 = mp(aa2.first+1,aa2.second-ukuran+1); aa6 = mp(aa2.first+ukuran,aa2.second); // kanan bawah
		aa7 = mp(aa2.first+1,aa2.second+1); aa8 = make_pair(aa2.first+ukuran,aa2.second+ukuran); // kiri bawah
		cari(aa1,aa2,ret+'0');
		cari(aa3,aa4,ret+'1');
		cari(aa5,aa6,ret+'2');
		cari(aa7,aa8,ret+'3');
	}
}

bool comp(string a,string b){
	return a<b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n; i++)
		for (j = 0 ; j < m ; j++)
			cin >> A[i][j];
	if (!(_dua(n) && _dua(m)) || (n!=m)){
		int z = 1;
		for (i = 1 ; i <= 7 ; i++) {
			z *= 2;
			if (z >=n && z >=m) {
				_size = z;
				break;
			}
		}
		for (i = n ; i < _size; i++){
			for (j = 0 ; j < _size; j++)
				A[i][j] = 0;
		}
		for (i = m ; i < _size; i++) 
			for (j = 0 ; j < n ; j++) 
				A[j][i] = 0;
		/*for (i = 0 ; i < _size; i++){
			for (j = 0 ; j < _size; j++){
				cout << A[i][j] << " ";
			}
			cout << '\n';
		}*/
	}
	else {
		_size = n;
	}
	cari(mp(0,0),mp(_size-1,_size-1),"");
	sort(ans.begin(),ans.end(),comp);
	cout << (int)ans.size() << '\n';
	for (i = 0 ; i < ans.size(); i++){
		cout << ans[i] <<'\n';
	}
	return 0;
}