#include <bits/stdc++.h>
using namespace std;

int banyak[5];
int n,k,i,j,pos,js,jd;
string s,kaos[5]={"S","M","L","XL","XXL"};
bool mundur,maju;

int cari_indeks(string l){
	for (int z=0;z<5;z++)
		if (l==kaos[z]) return z;
}
int main(){
	cin.tie(0);
	for (i=0;i<5;i++) 
		cin >> banyak[i];
	//for (i=0;i<5;i++){
	//	cout << kaos[i] << " " << banyak[i] << endl;
	//}
	cin >> k;
	while (k--) {
		cin >> s;
		pos = cari_indeks(s);
		if (banyak[pos]>0) {
			cout << s << endl;
			banyak[pos]--;
		}
		else {
			mundur = maju = true;
			i = pos-1;
			while (i>=0 && banyak[i]==0) i--;
			if (i<0) mundur = false;
			j = pos+1;
			while (j<5 && banyak[j]==0) j++;
			if (j>=5) maju = false;
			if (maju && !mundur) {
				cout << kaos[j] << endl;
				banyak[j]--;
			}
			else if (!maju && mundur) {
				cout << kaos[i] << endl;
				banyak[i]--;
			}
			else if (maju && mundur) {
				js = abs(pos-i); jd = abs(pos-j);
				if (js==jd) {
					cout << kaos[j] << endl;
					banyak[j]--;
				}
				else if (js<jd) {
					cout << kaos[i] << endl;
					banyak[i]--;
				}
				else if (jd<js) {
					cout << kaos[j] << endl;
					banyak[j]--;
				}
			}
		}
	}
	return 0;
}
