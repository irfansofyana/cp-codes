//339D -- solution by : cokguzel48
#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const int MAXN = (1<<17ll);

ll arr[MAXN+5], tree[2*MAXN+10];
int n, m;
int p, b;

void build(int node,int ki,int ka,int now){
	if (ki == ka) {
		tree[node] = arr[ki];
	}
	else {
		int mid = (ki + ka)>>1;
		build((node<<1), ki, mid, now+1);
		build((node<<1)+1, mid+1, ka, now+1);
		if (n%2 == 1) {
			if (now%2 == 1) tree[node] = tree[(node<<1)]|tree[(node<<1) + 1];
			else tree[node] = tree[(node<<1)]^tree[(node<<1)+1];
		}
		else {
			if (now%2 == 1) tree[node] = tree[(node<<1)]^tree[(node<<1) + 1];
			else tree[node] = tree[(node<<1)]|tree[(node<<1)+1];
		}
	}
}

void update(int node,int ki,int ka,int now,int x,int y){
	if (ki > ka || ki > x || ka < x) return;
	if (ki == ka && ki == x) {
		tree[node] = 1ll*y;
		return;
	}
	int mid = (ki + ka) >> 1;
	int le = (node << 1);
	int ri = (node << 1)+1;
	
	update(le, ki, mid, now+1, x, y);
	update(ri, mid+1, ka, now+1, x, y);
	
	if (n % 2 == 1) {
		if (now % 2 == 1) tree[node] = tree[le]|tree[ri];
		else tree[node] = tree[le]^tree[ri];
	}
	else {
		if (now % 2 == 1) tree[node] = tree[le]^tree[ri];
		else tree[node] = tree[le]|tree[ri];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	int ukuran = (1 << n);
	for (int i = 1;  i <= ukuran; i++) {
		cin >> arr[i];
	}
	build(1, 1, ukuran, 1);
	while (m--) {
		cin >> p >> b;
		update(1, 1, ukuran, 1, p, b);
		cout << tree[1] << '\n';
	}
	return 0;
}