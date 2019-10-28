#include <bits/stdc++.h>
#define OPTIMASI 
#define fi first
#define se second
using namespace std;

const int MAXX = (int)1e5;

typedef pair<int,int> pi;

int n,q,i,j,idx,kiri,kanan,ans;
int tree[10*MAXX + 5];
int smt[MAXX + 5];
pi arr[MAXX + 5];

int binser(int l,int r,int bil){
	while (l <= r){
		int mid = (l+r)/2;
		if (arr[mid].fi <= bil && bil <= arr[mid].se) return mid;
		else if (bil > arr[mid].se) l = mid+1;
		else if (bil < arr[mid].fi) r = mid-1;
	}
	return -1;
}

void build(int node,int l,int r){
	if (l == r) {
		tree[node] = arr[l].se - arr[l].fi + 1;
	}
	else {
		build((node << 1),l,((l+r) >> 1));
		build((node << 1) + 1,((l+r) >> 1)+1,r);
		tree[node] = max(tree[(node << 1)],tree[(node << 1) + 1]);
	}
}

int query(int node,int a,int b,int i,int j){
	if (b < i || a > j) return -MAXX;
	if (i <= a && b <= j) return tree[node];
	int q1 = query((node << 1),a,((a+b) >> 1),i,j);
	int q2 = query((node << 1)+1,((a+b) >> 1) + 1,b,i,j);
	if (q1 == -MAXX) return q2;
	if (q2 == -MAXX) return q1;
	return max(q1,q2);
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	while (cin >> n) {
		if (n == 0) return 0;
		cin >> q;
		for (i = 0 ; i < n ; i++) cin >> smt[i];
		i = 0; idx = 0;
		while (i < n) {
			j = i+1;
			while (j < n && smt[j] == smt[j-1]) j++;
			arr[idx++] = {i,j-1};
			i = j;
		}
		build(1,0,idx-1);
		while (q--) {
			cin >> kiri >> kanan;
			kiri--; kanan--;
			int x = binser(0,idx-1,kiri);
			int y = binser(0,idx-1,kanan);
			//cout << x << " " << y << '\n';
			if (x == y) {
				cout << kanan-kiri+1 << '\n';
			}
			else if (x == y-1) {
				ans = max(arr[x].se - kiri+1, kanan - arr[y].first + 1);
				cout << ans << '\n';
			}
			else {
				ans = max(arr[x].se - kiri+1, kanan - arr[y].first + 1);
				ans = max(ans,query(1,0,idx-1,x+1,y-1));
				cout << ans << '\n';
			}
		}
	}
	return 0;
}