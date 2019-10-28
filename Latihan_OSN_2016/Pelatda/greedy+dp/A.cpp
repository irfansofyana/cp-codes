#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
string s;
int awal,akhir;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		awal = 0; akhir = (int)s.size()-1;
		while (awal <= akhir && s[awal]==s[akhir]) {
			awal++;akhir--;
		}
		if (awal > akhir) {
			cout << "YES\n";
		}
		else {
			//s[awal] != s[akhir]
			i = awal; j = akhir;
			awal++;
			while (awal <= akhir && s[awal]==s[akhir]) {
				awal++;
				akhir--;
			} 
			if (awal > akhir) cout << "YES\n";
			else {
				awal = i;
				akhir = j;
				akhir--;
				while (awal <= akhir && s[awal]==s[akhir]) {
					awal++;
					akhir--;
				}
				if (awal > akhir) {
					cout << "YES\n";
				}
				else cout << "NO\n";
			}
		}
	}
	return 0;
}