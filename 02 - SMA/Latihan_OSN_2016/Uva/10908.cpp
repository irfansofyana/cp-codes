#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;

int t,i,j;
int n,m,q;
char A[105][105];
int ans,x,y;
pi atas,bawah;

bool cek(pi a){
	return (a.first >=0 && a.first < n && a.second >=0 && a.second < m);
}

bool _can(pi a,pi b){
	char pert;
	for (int z = a.first ; z <= b.first; z++) {
		for (int zz = a.second ; zz <= b.second ; zz++){
			if (z==a.first && zz==a.second) pert = A[z][zz];
			else {
				if (A[z][zz]!=pert) return false;
			}
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> t;
	while (t--) {
		cin >> n >> m >> q;
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < m ; j++)
				cin >> A[i][j];
		cout << n << " " << m << " " << q << '\n';
		while (q--) {
			cin >> x >> y;
			ans = 1;
			atas = mp(x,y); bawah = mp(x,y);
			atas = mp(atas.first-1,atas.second - 1);
			bawah = mp(bawah.first+1,bawah.second+1);
			while (cek(atas) && cek(bawah)){
				if (_can(atas,bawah)) {
					ans += 2;
					atas = mp(atas.first-1,atas.second - 1);
					bawah = mp(bawah.first+1,bawah.second+1);
				}
				else break;
			}
			cout << ans << '\n';
		}
	}
	return 0;
}