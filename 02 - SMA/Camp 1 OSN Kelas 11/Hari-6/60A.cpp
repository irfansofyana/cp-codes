#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,awal,akhir,ans;
bool A[1005],kanan,kiri;
string a,b,c,d;

int main(){
	cin.tie(0);
	cin >> n >> m;
	memset(A,true,sizeof A);
	awal = 1; akhir = n; kanan = true; kiri = true;
	for (i = 0 ; i < m ; i++) {
		cin >> a >> b >> c >> d >> j;
		A[j] = false;
		if (c=="right" && kanan) {
			awal = j+1;
			kanan = false;
		}
		else if (c=="right" && j>=awal) awal = j+1;
		else if (c=="left" && kiri) {
			akhir = j-1;
			kiri = false;
		}
		else if (c=="left" && j<=akhir) {
			akhir = j-1;
		} 
	}
	if (awal>akhir) puts("-1");
	else {
		for (i = awal ; i <= akhir ; i++) {
			if (A[i]) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}