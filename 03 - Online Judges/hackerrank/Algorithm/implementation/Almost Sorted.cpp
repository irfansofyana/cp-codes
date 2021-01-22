#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()
using namespace std;

const int N = (int)1e5;
int n,i,j,awal,akhir;
int arr[N + 5], brr[N + 5];
vector<pair<int,int> > p,q;

bool cek(int x,int y){
	while (x <= y) {
		if (arr[x] != brr[y]) return false;
		else {
			x++; y--;
		}
	}
	return true;
}

bool cekk(){
	i = 0 ; j = n-1;
	while (i <= j) {
		if (arr[i] != brr[j]) return false;
		else {
			i++;
			j--;
		}
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i];
		brr[i] = arr[i];
	}
	sort(brr, brr + n);
	for (i = 0 ; i < n ; i++) {
		if (arr[i] != brr[i]) {
			p.pb({arr[i],i});
			q.pb({brr[i],i});
		}
	}
	if (p.size() == 2) {
		if (p[0].fi == q[1].fi && p[1].fi == q[0].fi) {
			cout << "yes\n";
			cout << "swap " << p[0].se + 1 << " " << p[1].se + 1 << '\n';
			return 0;
		}
	}
	i = 0;
	while (i < n && arr[i] == brr[i]) {
		i++;
	}
	if (i == n) cout << "yes\n";
	else if (cekk()) {
		cout << "yes\n";
		cout << "reverse " << 1 << " " << n << '\n';
	}
	else {
		i = 0;
		while (i < n && arr[i] == brr[i]) {
			i++;
		}
		awal = i;
		i = n-1;
		while (i >= 0 && arr[i] == brr[i]) {
			i--;
		}
		akhir = i;
		if (cek(awal,akhir)) {
			cout << "yes\n";
			cout << "reverse " << awal + 1 << " " << akhir + 1 << '\n';
		}
		else cout << "no\n";
	}
	return 0;
}
