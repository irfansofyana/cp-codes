#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000;

int cond[10*MAXN],n,i,j,k;
int x,q,arr[MAXN + 5];
char comm;

int tipe(int x){
	if (x > 0) return 1;
	else if (x == 0) return 0;
	else return -1;
}

void build(int node,int l,int r){
	if (l == r) {
		cond[node] = tipe(arr[l]);
	}
	else {
		build((node << 1), l, ((l+r) >> 1));
		build((node << 1) + 1, ((l+r) >> 1)+1, r);
		cond[node] = cond[(node << 1)] * cond[(node << 1) + 1];
	}
}

void update(int node,int a,int b,int l,int r,int bil){
	if (b < l || a > r) return;
	if (l <= a && b <= r) {
		cond[node] = (tipe(bil));
		return;
	}
	update((node << 1), a, ((a+b) >> 1), l, r, bil);
	update((node << 1) + 1, ((a+b) >> 1) + 1, b, l, r, bil);
	cond[node] = cond[(node << 1)] * cond[(node << 1) + 1];
}

int query(int node,int a,int b,int l,int r){
	if (b < l || a > r) return 1;
	if (l <= a && b <= r) return cond[node];
	int t1 = query((node << 1), a, ((a+b) >> 1), l, r);
	int t2 = query((node << 1) + 1, ((a+b) >> 1) + 1, b, l, r);
	return t1 * t2;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> q) {
		for (i = 1 ; i <= MAXN; i++) cond[i] = 1;
		for (i = 1 ; i <= n ; i++) {
			cin >> arr[i];
		}
		build(1, 1, n);
		while (q--) {
			cin >> comm >> i >> j;
			if (comm == 'C') {
				update(1, 1, n, i, i, j);
			}
			else {
				int hasil = query(1, 1, n, i, j);
				if (hasil < 0) cout << '-';
				else if (hasil == 0) cout << '0';
				else cout << '+';
			}
		}
		cout << '\n';
	}
	return 0;
}