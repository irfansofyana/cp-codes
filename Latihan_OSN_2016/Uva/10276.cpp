#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int arr[55],banyak[55];
int ans;

bool cek(int x){
	int xx = (int)sqrt(x);
	if (xx*xx==x) return true;
	return false;
}

void cari(int current,int pos) {
	int bil = current + 1;
	bool _can = true;
	int mini = 100000000;
	int dipilih;
	for (int z = 1 ; z <= pos; z++) {
		if (cek(bil+arr[z])) {
			_can = false;
			if (banyak[z] < mini) {
				mini = banyak[z];
				dipilih = z;
			}
		}
	}
	if (!_can) {
		banyak[dipilih]++;
		arr[dipilih] = current + 1;
		cari(current + 1,pos);
	}
	else if (_can) {
		if (pos + 1 == n + 1 || current == 1000000) {
			if (current == 1000000) ans = -1;
			else ans = current;
			//ans = current;
			return ;
		}
		arr[pos + 1] = bil;
		banyak[pos + 1]++;
		cari(current + 1, pos + 1);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		memset(arr,0,sizeof arr);
		memset(banyak,0,sizeof banyak);
		arr[1] = 1; banyak[1] = 1;
		ans = 1;
		cari(1,1);
		cout << ans << '\n';
	}
	return 0;
}