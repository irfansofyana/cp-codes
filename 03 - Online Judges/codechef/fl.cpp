#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,k,l;
int i,j;
string s,nama[105];
map<string,bool> mep;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> k;
		mep.clear();
		for (i = 0 ; i < n ; i++) cin >> nama[i];
		while (k--) {
			int x;
			cin >> x;
			for (i = 0 ; i < x ; i++) {
				cin >> s;
				mep[s] = true;
			}
		}
		for (i = 0 ; i < n ; i++) {
			cout << ((mep[nama[i]]==true)?"YES":"NO") ;
			cout << (i==n-1?'\n':' ');
		}
	}
	return 0;
}