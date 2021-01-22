#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

int n, ans;
int arr[305][305];
int baris[305][100005], kolom[305][100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n ; i++) {
		for (int j = 0; j < n ; j++)
			cin >> arr[i][j];
	}
	memset(baris, -1, sizeof baris); memset(kolom, -1 , sizeof kolom);
	for (int i = 0 ; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (baris[i][arr[i][j]] == -1) baris[i][arr[i][j]] = j;
		}
	}
	ans = -1;
	for (int i = n-1; i >= 0; i--) {	//kolom
		for (int j = n-1; j >= 0; j--) {	//baris
			int bilangan = arr[j][i];
			for (int k = j; k >= 0; k--) {	//mundur ke baris belakang
				//if (baris[k][bilangan])
				if (k == j) {
					if (baris[k][bilangan] == i) continue;
					else if (baris[k][bilangan]!=-1 && baris[k][bilangan] < i) {
						ans = max(ans, bilangan);
						break;
					}
				}
				else {
					if (baris[k][bilangan] <= i) {
						ans = max(ans, bilangan);
						break;
					}
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}