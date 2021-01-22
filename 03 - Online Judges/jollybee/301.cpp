#include <bits/stdc++.h>
using namespace std;

char arah;
int awal,akhir,kec,angin;
int jarak;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed << showpoint;
	cout << setprecision(6);
	cin >> awal >> akhir >> kec >> angin >> arah;
	jarak = abs(awal-akhir);
	if (awal<akhir) {	// harus kekanan
		int kanan=0,kiri=0;
		bool bisa = true;
		if (arah=='R') {
			kanan = kec+angin;
			if (kec>angin) bisa = false;
			else kiri = angin-kec;
			if (bisa) cout << min(double(jarak)/kiri,double(jarak)/kanan) << '\n';
			else cout << double(jarak)/kanan << '\n';
		}
		else if (arah=='L') {
			if (kec<angin) bisa = false;
			else kanan = kec-angin;
			if (!bisa) cout << "Impossible" << '\n';
			else cout << double(jarak)/kanan << '\n';
		}
	}
	else if (awal>akhir) {
		int kanan=0,kiri=0;
		bool bisa = true;
		if (arah=='L') {
			kiri = kec+angin;
			if (kec>angin) bisa = false;
			else kanan = angin-kec;
			if (bisa) cout << min(double(jarak)/kiri,double(jarak)/kanan) << '\n';
			else cout << double(jarak)/kiri << '\n';
		}
		else if (arah=='R') {
			if (angin>kec) bisa = false;
			else kiri = kec-angin;
			if (!bisa) cout << "Impossible" << '\n';
			else cout << double(jarak)/kiri << '\n';
		}
	}
	else cout << double(0)	<< '\n';
	return 0;
}