#include <bits/stdc++.h>
using namespace std;

long long l,r,i,j,ans;
long long pangkat[20];
long long bilangan[10000];
long long ukuran,mulai,finis;

void isi_pangkat(){
	pangkat[0] = 1;
	for (i=1;i<=11;i++)
		pangkat[i] = 10*pangkat[i-1];
}

void isi_bilangan(){
	long long idx,depan,belakang;
	bilangan[0] = 4; bilangan[1] = 7;
	depan = 0; belakang = 1; idx = 2;
	for (i=2;i<=11;i++) {
		for (j=depan;j<=belakang;j++) {
			bilangan[idx] = pangkat[i-1]*4+bilangan[j];
			idx++;
		}
		for (j=depan;j<=belakang;j++) {
			bilangan[idx] = pangkat[i-1]*7+bilangan[j];
			idx++;
		}
		depan = belakang+1; belakang = 2*depan+1;
	}
	ukuran = idx;
}
int main(){
	cin.tie(0);
	cin >> l >> r;
	isi_pangkat();
	isi_bilangan();
	for (i=0;i<ukuran;i++) {
		if (bilangan[i]>=l) {
			mulai = i;
			break;
		}
	}
	for (i=0;i<ukuran;i++) {
		if (bilangan[i]>=r) {
			finis = i;
			break;
		}
	}
	if (mulai==finis) ans += (r-l+1)*bilangan[mulai];
	else {
		for (i=mulai;i<=finis;i++) {
			if (i==mulai) {
				ans += (bilangan[i]-l+1)*bilangan[i];
			}
			else if (i==finis) {
				ans += (r-(bilangan[i-1]+1)+1)*bilangan[i];
			}
			else {
				ans += (bilangan[i]-(bilangan[i-1]+1)+1)*bilangan[i];
			}
		}
	}	
	cout << ans << endl;
	return 0;
}
