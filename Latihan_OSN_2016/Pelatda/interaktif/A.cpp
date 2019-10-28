#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int bil;

void interaksi(int ada,int kiri,int kanan) {
	if (ada == 1) {
		cout << "Answer " << kiri << '\n' << flush;
		return;
	}
	else if (ada == 3) {
		cout << "Test " << kiri << " " << kiri+1 << '\n' << flush;
		cin >> bil;
		if (bil == 0) {
			cout << "Answer " << kiri + 2 << '\n' << flush;
			return;
		}
		else if (bil == 1) {
			cout << "Answer " << kiri << '\n' << flush;
			return;
		}
		else if (bil == -1) {
			cout << "Answer " << kiri + 1 << '\n' << flush;
			return;
		}
	}
	else if (ada == 2) {
		cout << "Test " << kiri << " " << kiri+1 << '\n' << flush;
		cin >> bil;
		int jaw;
		if (bil == 1) jaw = kiri;
		else jaw = kiri+1;
		cout << "Answer " << jaw << '\n' << flush;
		return;
	}
	else {
		int bag1 , bag2 , bag3;
		bag1 = bag2 = bag3 = ada/3;
		if (ada % 3 == 1) bag3++;
		else if (ada %3 == 2) {
			bag1++;
			bag2++;
		}
		cout << "Test ";
		for (int z = 1 ; z <= bag1 ; z++)  {
			cout << z+kiri-1 << " ";
		}
		for (int z = 1 ; z <= bag2; z++) {
			cout << z+kiri+bag1-1;
			cout << (z == bag2 ? '\n': ' ');
		}
		cout << flush;
		cin >> bil;
		if (bil == 0 ){ 
			interaksi(bag3,kiri+bag1+bag2,kanan);
			return;
		}
		else {
			if (bil == 1) {
				interaksi(bag1,kiri,kiri+bag1-1);
				return;
			}
			if (bil == -1) {
				interaksi(bag2,kiri+bag1,kiri+bag1+bag2-1);
				return;
			}
		}
	}
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	
	while (t--) {
		cin >> n;
		interaksi(n,1,n);
		//if (t!=0) cout << '\n';
	}
	return 0;
}