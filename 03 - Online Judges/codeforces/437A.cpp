#include <bits/stdc++.h>
using namespace std;
struct paket{
	int nama,nilai;
};
string s;
int banyak,i,j,temp,ans;
paket panjang[5];

bool comp(paket a,paket b){
	return a.nilai<b.nilai;
}

bool komp(paket a,paket b){
	return a.nilai>b.nilai;
}
int main(){
	cin.tie(0);
	for (i=0;i<4;i++) {
		cin >> s;
		panjang[i].nilai = s.size()-2;
		panjang[i].nama = i;
	}
	sort(panjang,panjang+4,comp);
	//for (i=0;i<4;i++) cout << panjang[i].nilai << " " << panjang[i].nama << endl;
	for (i=0;i<4;i++) {
	 	temp=0;
		for (j=0;j<4;j++) {
			if (i!=j) {
				if ((panjang[i].nilai*2)<=panjang[j].nilai) temp++;
			}
		}
		if (temp==3 && banyak==0) {
			ans = panjang[i].nama;
			banyak++;
		}
		else if (temp==3) banyak++;
	}
	sort(panjang,panjang+4,komp);
		for (i=0;i<4;i++) {
			temp = 0;
			for (j=0;j<4;j++) {
				if (i!=j) 
					if ((panjang[i].nilai)/2>=panjang[j].nilai) temp++;
			}
			if (temp==3 && banyak==0) {
				ans = panjang[i].nama;
				banyak++;
			}
			else if (temp==3) banyak++;
		}
	if (banyak==1) cout << char(ans+'A') << endl;
	else cout << 'C' << endl;
	return 0;
}
