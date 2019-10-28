#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int q,x;
string dummy;
int bilangan;
bool arr[255];

void cari(int l,int r,int dalam){
	if (dalam  > q) return;
	int tengah = (l+r)/2;
	arr[tengah] = true;
	cari(l,tengah-1,dalam+1);
	cari(tengah+1,r,dalam+1);
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy;
	cin >> n >> q;
	memset(arr,false,sizeof arr);
	cari(1,n,1);
	for (i = 1 ; i <= n ; i++) {
		if (!arr[i]){
			bilangan = i;
			break;
		}
	}
	while (q--) {
		cin >> x;
		if (x > bilangan) {
			cout << "TERLALU BESAR\n" << flush;
		}
		else if (x < bilangan) cout << "TERLALU KECIL\n" << flush;
		else if (x == bilangan) cout << "SELAMAT\n" << flush;
	}
	return 0;
}