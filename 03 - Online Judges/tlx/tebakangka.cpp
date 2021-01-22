#include <bits/stdc++.h>
using namespace std;

int a, b;
string hasil;

int main(){
	cin >> a >> b;
	cin.ignore();
	int lo = a;
	int hi = b;
	while (lo <= hi){
		int mid = (lo + hi) >> 1;
		cout << mid << '\n';
		fflush(stdout);
		getline(cin, hasil);
		if (hasil == "selamat") break;
		else if (hasil == "terlalu kecil") {
			lo = mid+1;
		}
		else hi = mid - 1;
	}
	return 0;
}