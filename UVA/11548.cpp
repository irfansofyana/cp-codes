#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int maks,smt;
string s[100],temp1,temp2;
string a,b;
int zz,zy,z;

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> s[i];
		}
		maks = 0;
		for (i = 0 ; i < n-1 ; i++) {
			for (j = i+1 ; j < n ; j++) {
				temp1 = s[i]; temp2 = s[j];
				for (z = temp1.size()-1 ; z>=( (-1*(int)temp2.size())+1 ); z--) {
					smt = 0;
					if (z>=0) {
						zz = z; zy = 0;
						while (zz<temp1.size() && zy < temp2.size()) {
							if (temp1[zz]==temp2[zy]) smt++;
							zz++; zy++;
						}
					}
					else {
						zz = 0; zy = abs(z);
						while (zz<temp1.size() && zy < temp2.size()) {
							if (temp1[zz]==temp2[zy]) smt++;
							zz++; zy++;
						}
					}
					maks = max(maks,smt);
				}
			}
		}
		cout << maks << endl;
	}
	return 0;
}