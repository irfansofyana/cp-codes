#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n,i,j;
string s;
vector<char> v,k;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> s;
		v.clear(); k.clear();
		for (i = 0 ; i < s.size(); i++) {
			if (s[i]=='a' || s[i]=='i' || s[i]=='u' || s[i]=='e' || s[i]=='o') v.push_back(s[i]);
			else k.push_back(s[i]);
		}
		int y = k.size()-v.size();
		int x = v.size()-y;
	//	cout << x << " " << y << '\n';
		cout << "Case #" << ++tc << ": ";
		if (x<0 || y<0) cout << "IMPOSSIBLE";
		else {
			int z = 0;
			int zz = 0;
			for (i = 0 ; i < 2*x ; i++) {
				if (i%2==0) {
					cout << k[z];
					z++;
				}
				else {
					cout << v[zz];
					zz++;
				}
			}
			for (i = 0 ; i < 3*y ; i++) {
				if (i%3==0 || i%3==2) {
					cout << k[z] ;
					z++;
				}
				else {
					cout << v[zz] ;
					zz++;
				}
			}
		}
		cout << '\n';
	}	
	return 0;
}