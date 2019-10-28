#include <bits/stdc++.h>
using namespace std;

int tc,i;
string s,akhir;

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> s;
		akhir = s.substr(0,(s.size()/2));
		for (i = 0 ; i < akhir.size() ; i+=2) {
			cout <<akhir[i];
		}
		cout << endl;
	}
	return 0;
}