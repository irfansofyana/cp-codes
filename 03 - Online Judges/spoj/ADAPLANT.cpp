#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int N = (int)1e5;

int t,n,i,j,k,ans;
int mini[3 * N + 10], maks[3 * N + 10];
int arr[N + 5];
int temp1,temp2,batas1,batas2;
int MAKS,MINI;

void build(int node,int kiri,int kanan){
	if (kiri == kanan){
		mini[node] = arr[kiri];
		maks[node] = arr[kiri];
	}
	else {
		build(node * 2, kiri, (kiri + kanan)/2);
		build(node * 2 + 1, (kiri + kanan)/2 + 1, kanan);
		mini[node] = min(mini[node * 2], mini[node * 2 + 1]);
		maks[node] = max(maks[node * 2], maks[node * 2 + 1]);
	}
}

int query_maks(int node,int kiri,int kanan,int i,int j){
	if (kanan < i || kiri > j) return -1;
	if (i <= kiri && kanan <= j) return maks[node];
	
	int x1 = query_maks(node * 2, kiri, (kiri + kanan)/2, i, j);
	int x2 = query_maks(node * 2 + 1, (kiri + kanan)/2 + 1, kanan, i, j);
	if (x1 == -1) return x2;
	if (x2 == -1) return x1;
	return max(x1,x2);
}

int query_mini(int node,int kiri,int kanan,int i,int j){
	if ( kanan < i || kiri > j) return -1;
	if (i <= kiri && kanan <= j) return mini[node];
	
	int x1 = query_mini(node * 2, kiri, (kiri + kanan)/2, i, j);
	int x2 = query_mini(node * 2 + 1, (kiri + kanan)/2 + 1, kanan, i, j);
	if (x1 == -1) return x2;
	if (x2 == -1) return x1;
	return min(x1,x2);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (i = 0 ; i < n ; i++) cin >> arr[i];
		build(1,0,n-1);
		ans = -1;
		for (i = 0 ; i < n ; i++) {
			batas1 = min(n-1,i+1);
			batas2 = min(i + k + 1, n - 1);
			MAKS = query_maks(1,0,n-1,batas1,batas2);
			MINI = query_mini(1,0,n-1,batas1,batas2);
			temp1 = max(abs(MAKS - arr[i]), abs(MINI - arr[i]));
			
			batas1 = max(0,i-k-1);
			batas2 = max(0,i-1);
			MAKS = query_maks(1,0,n-1,batas1,batas2);
			MINI = query_mini(1,0,n-1,batas1,batas2);
			temp2 = max(abs(MAKS - arr[i]), abs(MINI - arr[i]));
			
			ans = max(max(temp1,temp2), ans);
		}
		cout << ans << '\n';
	}
	return 0;
}
