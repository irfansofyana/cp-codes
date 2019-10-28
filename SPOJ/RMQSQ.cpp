#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int N = (int)1e5;

int n,q,i,j;
int arr[N + 5];
int tree[2 * N + 5];

void build(int node,int kiri,int kanan){
	if (kiri == kanan){
		tree[node] = arr[kiri];
	}
	else {
		build(node * 2, kiri, (kiri + kanan)/2);
		build(node * 2 + 1, (kiri + kanan)/2 + 1, kanan);
		tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
	}
}

int query(int node,int kiri,int kanan,int i,int j){
	if (kiri > kanan || kanan < i || kiri > j) return -1;
	if (i <= kiri && kanan <= j) return tree[node];
	
	int q1 = query(node * 2, kiri, (kiri + kanan)/2 , i, j);
	int q2 = query(node * 2 + 1, (kiri + kanan)/2 + 1, kanan, i, j);
	if (q1 == -1) return q2;
	if (q2 == -1) return q1;
	return min(q1,q2);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	build(1,0,n-1);
	cin >> q;
	while (q--){
		cin >> i >> j;
		cout << query(1, 0, n-1, i , j) << '\n';
	}
	return 0;
}
