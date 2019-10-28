#include <bits/stdc++.h>
using namespace std;

int n,i,j,x;
int ans[100005];
bool sudah[100005];
vector<int> belum;

int main(){
	cin.tie(0);
	cin >> n;
	memset(sudah,false,sizeof sudah);
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		if (sudah[x]==false && x>=1 && x<=n) {
			sudah[x] = true;
			ans[i] = x;
		}
		else belum.push_back(i);
	}
	j = 0;
	for (i = 1 ; i<= n ; i++) {
		if (!sudah[i]) {
			ans[belum[j]] = i;
			j++;
		} 
	}
	for (i = 0 ; i < n ; i++) {
		if (i!=n-1) cout << ans[i] << " ";
		else cout << ans[i] << endl;
	}
	return 0;
}