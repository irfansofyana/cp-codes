#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
using namespace std;

int t,n,i,j;
string a,b;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int maks,mini;
		maks = 0; mini = 0;
		for (i = 0 ; i < a.size(); i++) {
			if (a[i]=='?') {
				maks++;
			}
			else {
				if (b[i]=='?') maks++;
				else if (a[i]!=b[i]) {
					mini++; maks++;
				}
			}
		}
		cout << mini << " " << maks << '\n';
	}
	return 0;
}