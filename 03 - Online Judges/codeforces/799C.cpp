//799C
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef pair<int,int> ii;

int n, c, d;
int treeC[500005], treeD[500005];
char ch;
vector<ii> C, D;
int ans;
vector<int> sc,sd;

void build1(int node,int kiri,int kanan){
	if (kiri == kanan) {
		treeC[node] = C[kiri].se;
	}
	else {
		int mid = (kiri + kanan)/2;
		build1(node*2, kiri, mid);
		build1(node*2 + 1, mid + 1, kanan);
		treeC[node] = max(treeC[node*2], treeC[node*2 + 1]);
	}
}


void build2(int node,int kiri,int kanan){
	if (kiri == kanan) {
		treeD[node] = D[kiri].se;
	}
	else {
		int mid = (kiri + kanan)/2;
		build2(node*2, kiri, mid);
		build2(node*2 + 1, mid + 1, kanan);
		treeD[node] = max(treeD[node*2], treeD[node*2 + 1]);
	}
}

int query1(int node,int kiri,int kanan,int l,int r){
	if (kanan < l || kiri > r || kiri > kanan || l > r) return -1;
	if (l <= kiri && kanan <= r) return treeC[node];
	int mid = (kiri + kanan)/2;
	int t1 = query1(node*2, kiri, mid, l, r);
	int t2 = query1(node*2 + 1, mid + 1, kanan, l, r);
	if (t1 == -1) return t2;
	if (t2 == -1) return t1;
	return max(t1, t2);
}


int query2(int node,int kiri,int kanan,int l,int r){
	if (kanan < l || kiri > r || kiri > kanan || l > r) return -1;
	if (l <= kiri && kanan <= r) return treeD[node];
	int mid = (kiri + kanan)/2;
	int t1 = query2(node*2, kiri, mid, l, r);
	int t2 = query2(node*2 + 1, mid + 1, kanan, l, r);
	if (t1 == -1) return t2;
	if (t2 == -1) return t1;
	return max(t1, t2);
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> c >> d;
	int tc = -1, td = -1;
	for (int i = 0 ; i < n ; i++) {
		int cantik,harga;
		cin >> cantik >> harga >> ch;
		if (ch == 'C') {
			C.pb({harga,cantik});
			if (harga <= c) tc = max(tc, cantik);
			sc.pb(harga);
		}
		else {
			D.pb({harga,cantik});
			if (harga <= d) td = max(td, cantik);
			sd.pb(harga);
		}
	}
	if (tc != -1 && td != -1) ans = max(ans, tc + td);
	sort(C.begin(),C.end()); sort(D.begin(), D.end());
	sort(sc.begin(), sc.end()); sort(sd.begin(),sd.end());
	if ((int)C.size() >= 1) build1(1,0,(int)C.size()-1); 
	//cout << "aaaa" << '\n';
	if ((int)D.size() >= 1) build2(1,0,(int)D.size()-1);
	//cout << "aaaa" << '\n';
	for (int i = 0; i < C.size(); i++) {
		if (C[i].fi > c) break;
		int b1 = C[i].se;
		int kanan = upper_bound(sc.begin(), sc.end(), c-C[i].fi) - sc.begin();
		kanan--;
		int b2 = -1;
		if (kanan < i) b2 = max(b2, query1(1,0,(int)C.size()-1,0,kanan));
		else if (kanan == i) b2 = max(b2, query1(1,0,(int)C.size()-1,0,kanan-1));
		else {
			b2 = max(b2, query1(1,0,(int)C.size()-1,0,i-1));
			b2 = max(b2, query1(1,0,(int)C.size()-1,i + 1,kanan));
		}
		if (b2 != -1) ans = max(ans, b1 + b2);
	}
	//cout << ans << '\n';
	for (int i = 0; i < D.size(); i++) {
		if (D[i].fi > d) break;
		int b1 = D[i].se;
		int kanan = upper_bound(sd.begin(), sd.end(), d-D[i].fi) - sd.begin();
		kanan--;
		int b2 = -1;
		if (kanan < i) b2 = max(b2, query2(1,0,(int)D.size()-1,0,kanan));
		else if (kanan == i) b2 = max(b2, query2(1,0,(int)D.size()-1,0,kanan-1));
		else {
			b2 = max(b2, query2(1,0,(int)D.size()-1,0,i-1));
			b2 = max(b2, query2(1,0,(int)D.size()-1,i + 1,kanan));
		}
		if (b2 != -1) ans = max(ans, b1 + b2);
	}
	cout << ans << '\n';
	return 0;
}