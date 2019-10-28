#include <bits/stdc++.h>
using namespace std;
struct paket{
	int awal,akhir;
};
const int MAXN=1000000;

int n,i,j,bil;
paket ans[MAXN+5];
int A[MAXN+5],B[MAXN+5],cum[MAXN+5];
int acuan,jaw,titik;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &B[i]);
		cum[B[i]]++;
	}
	acuan = cum[1];
	for (i = 2 ; i <= MAXN ; i++) {
		if (cum[i]>acuan) acuan = cum[i];
	}
	//memset(A,0,sizeof A);
	for (i = 0 ; i < n ; i++) {
		A[B[i]]++;
		if (acuan==1) {
			ans[B[i]].awal = i+1; ans[B[i]].akhir = i+1;
		}
		else {
			if (A[B[i]]==1) ans[B[i]].awal = i+1;
			else ans[B[i]].akhir = i+1;
		}
	}
	jaw = 2000000000;
	for (i = 1 ; i <= MAXN ; i++) {
		if (cum[i]==acuan) {
			if (ans[i].akhir-ans[i].awal+1<jaw) {
				jaw = ans[i].akhir-ans[i].awal+1;
				titik = i;
			}
		}
	}
	printf("%d %d\n", ans[titik].awal, ans[titik].akhir);
	return 0;
}
