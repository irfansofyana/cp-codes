#include <bits/stdc++.h>
using namespace std;

string bulan;
int hari,tahun;
int ja1,ma1,ja2,ma2;
char c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> bulan) {
		cin >> hari >> tahun >> ja1 >> c >> ma1 >> ja2 >> c >> ma2;
		cout << bulan << " " << hari << " " << tahun << " ";
		if (ma2>=ma1) {
			cout << ja2-ja1 << " hours " << ma2-ma1 << " minutes\n"; 
		}
		else {
			cout << (ja2-1-ja1) << " hours " << ma2+60-ma1 << " minutes\n";
		}
	}
	return 0;
}