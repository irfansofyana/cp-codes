#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int l[5],s[5],r[5],p[5];
int i,j;

int main(){
	bool ans = false;
	for (i = 1; i <= 4 ;i++) {
		cin >> l[i] >> s[i] >> r[i] >> p[i];
		if (p[i] == 1 ) {
			if (l[i] == 1 || s[i] == 1 || r[i] == 1) {
				ans = true;
			} 
		} 
	}
	if (ans) {
		cout << "YES\n";
		return 0;
	}
	else {
		for (i = 1; i <= 4; i++) {
			if (p[i] == 1) {
				if (i == 1 && (l[2] == 1 || r[4] == 1 || s[3] == 1)) ans = true;
				if (i == 2 && (l[3] == 1 || r[1] == 1 || s[4] == 1)) ans = true;
				if (i == 3 && (r[2] == 1 || l[4] == 1 || s[1] == 1)) ans = true; 
				if (i == 4 && (l[1] == 1 || r[3] == 1 || s[2] == 1)) ans = true;
			}
		}
		if (ans) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}