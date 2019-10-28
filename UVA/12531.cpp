#include <bits/stdc++.h>
using namespace std;

map<double,int> can;
int n,i,j;
double sudut;

void generate(){
	int jam,menit;
	jam = 0; menit = 0;
	while (jam != 12) {
		sudut = jam*30.0 + (menit/60.0)*(30.0);
		double komplemen = menit*6.0;
		if (sudut > komplemen) sudut -= komplemen;
		else sudut = komplemen-sudut;
		if (sudut >= 180.0) sudut = 360-sudut;
		can[sudut]++;
		if (sudut == 65.0) cout << jam << " " << menit << '\n';
		//cout << jam << ":" << menit << " = " << sudut << '\n'; 
		menit++;
		if (menit == 60) {
			menit = 0;
			jam++;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	while (cin >> n) {
		cout << (can[(double)n] > 0 ? 'Y' : 'N') << '\n';
	}
	return 0;
}