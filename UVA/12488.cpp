#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int awal[30],akhir[30];
vector<int> temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin>>n){
		for (i = 0 ; i < n ; i++) cin >> awal[i];
		for (j = 0 ; j < n ; j++) cin >> akhir[j];
		int ans = 0;
		for (i = 0 ; i < n ; i++) {
			if (awal[i]!=akhir[i]) {
				temp.clear();
				temp.push_back(awal[i]);
				int x = i+1;
				for (j = x; j < n ; j++) {
					ans++;
					if (awal[j]!=akhir[i]) temp.push_back(awal[j]);
					else break;
				}
				awal[i] = awal[j];
				int idx = 0;
				for (int k = x; k <= j; k++) {
					awal[k] = temp[idx];
					idx++;
				}
			}
			//for (int k = 0 ; k < n; k++) cout << awal[k] << " "; cout << '\n';
		}
		cout << ans << '\n';
	}
	return 0;
}