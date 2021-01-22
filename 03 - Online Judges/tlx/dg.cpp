#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int t, n, e;
int q, r, i, j;
int A[200005], B[200005];
int spesial[50005];
bool boleh[200005];
int parent[50005], parr[50005];
ll ans;

int cari(int x){
	if (x == parent[x]) return x;
	else return parent[x] = cari(parent[x]);
}

void gabung(int a,int b){
	int x = cari(a);
	int y = cari(b);
	if (x != y) parent[x] = y;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> e >> q >> r;
		for (i = 0 ; i < e; i++) {
			cin >> A[i] >> B[i];
			A[i]--; B[i]--;
		}
		for (i = 0 ; i < q ; i++) {
			cin >> spesial[i];
			spesial[i]--;
		}
		memset(boleh, true, sizeof boleh);
		for (i = 0 ; i < r ; i++) {
			int x;
			cin >> x;
			x--; boleh[x] = false;
		}
		for (i = 0 ; i < n ; i++) parent[i] = i;
		for (i = 0 ; i < e; i++) {
			if (boleh[i]) {
				gabung(A[i], B[i]);
			}
		}
		ans = ((ll)q*(q-1))/2;
		memset(parr, 0, sizeof parr);
		for (i = 0 ; i < q; i++) {
			parr[cari(spesial[i])]++;
		}
		for (i = 0 ; i < n ; i++) {
			if (parr[i] > 0)
				ans -= ((ll)parr[i]*(parr[i]-1))/2;
		}
		cout << ans << '\n';
	}
	return 0;
}