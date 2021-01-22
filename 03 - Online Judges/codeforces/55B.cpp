#include <bits/stdc++.h>
using namespace std;

long long bil[4],cbaru[4],pindah[4];
long long n,i,j,k,ans=1000000000;
char operasi[4];

void jelajah(int k,int l){
	int it,itt,temp,idx;
	if (l==3) {
		if (bil[0]<ans) ans = bil[0];
	}
	else {
		for (it=0;it<k;it++){
			for (itt=it+1;itt<k;itt++) {
				if (operasi[l]=='+') temp = bil[it]+bil[itt];		//pilih dua titik dari k titik
				else temp = bil[it]*bil[itt];
				cbaru[0] = temp;
				idx = 1;
				for (int z=0;z<k;z++) {			
					if (z!=it && z!=itt) { 			//masih dibutuhkan untuk proses berikutnya
						cbaru[idx] = bil[z];
						idx++;
					}
					pindah[z] = bil[z];
				}
				for (int z=0;z<idx;z++) bil[z] = cbaru[z];
				for (int z=0;z<idx;z++) cout << bil[z] << " ";
				cout << endl;
				jelajah(k-1,l+1);
				for (int z=0;z<k;z++) bil[z] = pindah[z];
			}
		}
	}
}
int main(){
	cin.tie(0);
	for (i=0;i<4;i++) cin >> bil[i];
	for (i=0;i<3;i++) cin >> operasi[i];
	jelajah(4,0);
	cout << ans << endl;
}
