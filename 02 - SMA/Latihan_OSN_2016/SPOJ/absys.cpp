#include <bits/stdc++.h>
using namespace std;

int t;
string s1,s2,s3;
char c;

int ubah(string s){
	stringstream ss(s);
	int res;
	return ss >> res ? res : 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> t;
	while (t--) {
		cin >> s1 >> c >> s2 >> c >> s3;
		if (s1.find("machula") != -1) {
			int a,b;
			a = ubah(s2); b = ubah(s3);
			cout << b-a << " + " << a << " = " << b << '\n';
		}
		else if (s2.find("machula") != -1) {
			int a,b;
			a = ubah(s1);
			b = ubah(s3);
			cout << a << " + " << b-a << " = " << b << '\n';
		}
		else {
			int a,b;
			a = ubah(s1);
			b = ubah(s2);
			cout << a << " + " << b << " = " << a+b << '\n';
		}
	}
	return 0;
}