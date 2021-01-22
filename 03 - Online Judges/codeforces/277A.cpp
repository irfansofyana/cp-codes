#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, m, ans;
int parrent[105];
int tt[105];
bool udah[105], muncul[105];

int cari(int x){
	return (x == parrent[x] ? x : parrent[x] = cari(parrent[x]));
}

void gabung(int x,int y){
	int a = cari(x);
	int b = cari(y);
	if (a != b) {
		parrent[b] = a;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= m ; i++) parrent[i] = i;
	for (int i = 0 ; i < n ; i++) {
		int tmp;
		cin >> tmp;
		if (tmp == 0) ans++;
		for (int j = 0 ; j < tmp; j++) {
			cin >> tt[j];
			muncul[tt[j]] = true;
			if (j > 0) gabung(tt[j], tt[j-1]);
		}
	}
	bool ada = false;
	for (int i = 1; i <= m ; i++) {
		if (!udah[cari(i)] && muncul[cari(i)]) {
			ada = true;
			ans++;
			udah[cari(i)] = true;
			muncul[cari(i)] = false;	
		}
	}
	cout << (ada ? ans -1 : ans) << '\n';
	return 0;
}