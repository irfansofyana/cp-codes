#include <bits/stdc++.h>
using namespace std;

int t,i,j,k,n;
int arr[100005],tmp[100005];
int a,b,c,tc;

int cari(int idx){
	if (idx == a) {
		if (arr[idx]%2 == 1) return (arr[idx] + 1)/2;
		return arr[idx]/2;
	}
	else if (idx == b) {
		if (arr[idx] > 0) {
			arr[idx]--;
			return (arr[idx]/2);
		}
		return 0;
	}
	else if (idx == c) {
		return min((int)10,arr[idx]/2);
	}
	else return arr[idx]/2;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> a >> b >> c >> k;
		for (i = 1 ; i <= n ; i++) 
			cin >> arr[i];
		while (k--) {
			for (i = 1 ; i <= n ; i++) {
				tmp[i] = cari(i); 
			}
			for (i = 1 ; i <= n ; i++) {
				arr[i] = arr[i] - tmp[i] + tmp[(i == 1 ? n : i-1)];
			}
		}
		cout << "Kasus #" << ++tc << ": " << arr[a] << " " << arr[b] << " " << arr[c] << '\n';
	}
	return 0;
}
