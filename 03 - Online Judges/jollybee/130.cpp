#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
string s;

int main(){
	OPTIMASI
	cin >> n;
	int tc = 0;
	while (n--) {
		cin >> s;
		i = 0 ;
		cout << "Kasus #" << ++tc << ": ";
		while (i<s.size()) {
			if (s[i]=='.') {
				cout << '.';
				i++;
			}
			else {
				int frek = 1;
				j = i+1;
				while (s[j]==s[i] && j < s.size()){
					frek++;
					j++;
				}
				if (frek%2==0) {
					for (int z = 0 ; z < frek; z++) cout << '.';
				}
				else {
					for (int z = 1 ; z <= frek ; z++) {
						if (z==(frek+1)/2) cout << 'X';
						else cout << '.';
					}
				}
				i = j;
			}
		}
		cout << '\n';
	}
	return 0;
}