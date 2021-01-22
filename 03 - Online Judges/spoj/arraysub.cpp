#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int N = (int)1e6;

int n,k,i,j;
int arr[N + 5], tree[2 * N + 10];

void build(int node,int kiri,int kanan){
	if (kiri == kanan) {
		tree[node] = arr[kiri];
	}
	else {
		build (node * 2, kiri, (kiri + kanan)/2 );
		build (node * 2 + 1, (kiri + kanan)/2 + 1, kanan);
		tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
	}
}

int query(int node,int a,int b,int i,int j){
	if (a > b || b < i || a > j) return -1;
	if (i <= a && b <= j) return tree[node];
	
	int q1 = query(node * 2, a, (a + b)/2, i, j);
	int q2 = query(node * 2 + 1, (a + b)/2 + 1, b, i, j);
	
	if (q1 == -1) return q2;
	if (q2 == -1) return q1;
	return max(q1,q2);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	cin >> k;
	k--;
	build(1, 0, n-1);
	//cout << "aa\n";
	for (i = k ; i < n ; i++) {
		cout << query(1, 0, n-1, i-k, i) << (i == n-1 ? '\n' : ' ');
	}
	return 0;
}
