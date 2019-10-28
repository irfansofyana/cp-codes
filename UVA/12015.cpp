#include <bits/stdc++.h>
using namespace std;

int n,i,j,maks;
string s[12];
int k[12],l[12];

int main() {
	cin >> n;
	j = 1;
	while (n--) {
		maks = -1000000000;
		memset(l,0,sizeof l);
		for (i=0;i<10;i++) {
			cin >> s[i] >> k[i];
			if (k[i]>maks) {
				memset(l,0,sizeof l);
				maks = k[i];
				l[i] = 1;
			}
			else if (k[i]==maks) {
				l[i] = 1;
			}
		}
		cout << "Case #"<<j<<":\n";
		for (i=0;i<10;i++)
			if (l[i]==1) cout<<s[i]<<endl;
		j++;
	}
	return 0;
}
