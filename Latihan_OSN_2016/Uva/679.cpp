#include <bits/stdc++.h>
using namespace std;

int d,l,i,j;
int t,bil;
bool arr[1048577];
int ans;

void binser(int pos) {
	if (pos < bil) {
		if (!arr[pos]) {
			arr[pos] = true;
			binser(2*pos);
		}
		else {
			arr[pos] = false;
			binser(2*pos+1);
		}
	}
	else {
		ans = pos/2;
		return ;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> t){
		if (t==-1) return 0;
		while (t--) {
			cin >> d >> l;
			bil = 1;
			for (i = 1 ; i <= d; i++) bil *= 2;
			memset(arr,false,sizeof arr);
			while (l--) {
				binser(1);
			}
			cout << ans << '\n';
		}
	}
	return 0;
}