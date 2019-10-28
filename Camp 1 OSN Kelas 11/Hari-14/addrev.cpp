#include <bits/stdc++.h>
using namespace std;

int tc,n,i,j;
string a,b,c,d;
bool nol;

int ubah(string s){
	stringstream ss(s);
	int res;
	return ss >> res?res:0;
}

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> a >> b;
		c = ""; d = ""; nol = false;
		for (i = a.size()-1 ; i >= 0 ; i--) {
			if (a[i]=='0' && nol) {
				c = c+a[i];
			}
			else if (a[i]!='0') {
				nol = true;
				c = c+a[i];
			}
		}
		nol = false;
		for (i = b.size()-1 ; i>=0 ; i--) {
			if (b[i]=='0' && nol) {
				d = d+b[i];
			}
			else if (b[i]!='0') {
				nol = true;
				d = d+b[i];
			}
		}
		n = ubah(c)+ubah(d);
		nol = false;
		while (n>0) {
			if (nol && (n%10)==0) {
				cout << n%10;
			}
			else if ((n%10)!=0) {
				nol = true;
				cout << n%10;
			}
			n/=10;
		}
		cout << endl;
	}
	return 0;
}