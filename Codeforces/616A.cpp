#include <bits/stdc++.h>
using namespace std;

string a,b,c,d;
int i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	for (i = 0 ; i < a.size(); i++) {
		if (a[i]!='0') {
			c = a.substr(i,a.size()-i);
			break;
		}
	}
	for (i = 0 ; i < b.size(); i++) {
		if (b[i]!='0') {
			d = b.substr(i,b.size()-i);
			break;
		}
	}
	//cout << c << " " << d << '\n';
	if (c.size()<d.size()) cout << '<';
	else if (c.size()>d.size()) cout << '>';
	else if (c<d) cout << '<';
	else if (c>d) cout << '>';
	else cout << '=';
	cout << '\n';
	return 0;
}