#include <bits/stdc++.h>
using namespace std;

int s,d,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> s >> d) {
		int ans;
		bool pertama = true;
		for (i = 0 ; i < (1 << 12); i++){
			vector<int> A;
			for (j = 0 ; j < 12; j++) {
				if ((i&(1 << j)) > 0) A.push_back(1);	//surplus
				else A.push_back(0);	//defisit
			}
			bool ada = true;
			int _i = 7;
			while (_i < A.size()){
				int temp = 0;
				for (j = _i-7 ; j <= _i; j++) {
					if (A[j]==1) temp++;
				}
				if (temp==8) {
					ada = false; 
					break;
				}
				else _i++;
			}
			if (ada) {
				int nilai = 0;
				for (j = 0 ; j < A.size(); j++) {
					if (A[j]==1) nilai += s;
					else nilai -= d;
				}
				if (nilai > 0 && pertama) {
					pertama = false; ans = nilai;
				}
				else if (nilai > 0) {
					if (nilai > ans) ans = nilai;
				}
				if (nilai==412) {
					for (j = 0 ; j < A.size(); j++) {cout << A[j] << '\n';}
					return 0;
				}
			}
		}
		if (!pertama) cout << ans << '\n';
		else cout << "Deficit\n";
	}
	return 0;
}