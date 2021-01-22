#include <bits/stdc++.h>
using namespace std;

const int MAKSN = 100005;

int n,m,i,j;
int divisi[MAKSN];
int mini_satu,maks_dua;
bool jaw;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(divisi,-1,sizeof divisi);
	cin >> n >> m;
	jaw = true;
	for (i = 0 ; i < m ; i++) {
		int x,y;
		cin >> x >> y;
		if (x > y) {
			if (divisi[x] == 2) {
				//cout << 0 << '\n';
				//return 0;
				jaw = false;
			}
			else {
				divisi[x] = 1;
				if (divisi[y] == 1) {
					//cout << 0 << '\n';
					//return 0;
					jaw = false;
				}
				else divisi[y] = 2;
			}
		}
		else {
			if (divisi[x] == 1) {
				//cout << 0 << '\n';
				//return 0;
				jaw = false;
			}
			else {
				divisi[x] = 2;
				if (divisi[y] == 2) {
					//cout << 0 << '\n';
					//return 0;
					jaw = false;
				}
				else divisi[y] = 1;
			}
		}
	}
	if (!jaw) {
		cout << 0 << '\n';
		return 0;
	}
	if (m == 0) {
		cout << n-1 << '\n';
		return 0;
	}
	//for (i = 1; i <= n;  i++) cout << divisi[i] << " ";
	//cout << '\n';
	maks_dua = -1; mini_satu = (int)1e9;
	for (i = 1 ; i <= n ; i++) {
		if (divisi[i] == 1) {
			mini_satu = min(mini_satu,i);
		}
		else if (divisi[i] == 2) {
			maks_dua = max(maks_dua,i);
		}
	}
	int ans = 0;
	//cout << maks_dua << " " << mini_satu << '\n';
	if (maks_dua > mini_satu) {
		cout << 0 << '\n';
		return 0;
	}
	for (i = maks_dua+1; i <= mini_satu-1; i++) 
		if (divisi[i]==-1) ans++;
	cout << ans+1 << '\n';
	return 0;
}