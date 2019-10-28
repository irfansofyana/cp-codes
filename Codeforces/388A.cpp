#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j;
int arr[105];
vector<int> tempat;
int ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	i = n-1;
	while (i >= 0) {
		ans++;
		tempat.clear();
		tempat.pb(arr[i]);
		j = i-1;
		while (j >= 0) {
			bool cek = true;
			for (int z = 0 ; z < tempat.size(); z++) {
				tempat[z]--;
				if (tempat[z] < 0) {
					cek = false;
					break;
				}
			}
			if (cek) {
				tempat.pb(arr[j]);
				j--;
			}
			else {
				i = j;
				break;
			}
		}
		if (j < 0) break;
	}
	cout << ans << '\n';
	return 0;
}	