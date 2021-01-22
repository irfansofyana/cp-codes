#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, ambil[10], ambill[10];
bool ada[10];
vector<int> arr[5];
bool sudah[1005];

void cari(int idx,int udah){
	if (idx == n) {
		for (int i = 0 ; i < udah; i++) 
			ambill[i] = ambil[i];
		sort(ambill, ambill+udah);
		do{	
			int hasil = 0;
			for (int i = 0 ; i < udah; i++) {
				hasil = 10*hasil + ambill[i];
			}
			sudah[hasil] = true;
			//cout << hasil << '\n';
		}while (next_permutation(ambill, ambill+udah));
	}
	else {
		cari(idx + 1, udah);
		for (int i = 0 ; i < arr[idx].size(); i++) {
			ambil[udah] = arr[idx][i];
			cari(idx + 1, udah + 1);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		memset(ada, false, sizeof ada);
		for (int j = 0 ; j < 6; j++) {
			int x;
			cin >> x;
			if (!ada[x]) {
				ada[x] = true;
				arr[i].pb(x);
			} 
		}
	}
	cari(0, 0);
	int i = 1;
	while (sudah[i]) i++;
	cout << i-1 << '\n';
	return 0;
}