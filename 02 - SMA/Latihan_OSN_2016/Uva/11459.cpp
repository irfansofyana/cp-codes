#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

int a,b,c,i,j;
vector<pair<int,int> > arr;
int naik[205],turun[205];
int pos[1000005];
vector<int> dadu;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		memset(naik,-1,sizeof naik); memset(turun,-1,sizeof turun);
		for (i = 0 ; i < b ; i++) {
			int x,y;
			cin >> x >> y;
			if (x < y) naik[x] = y;
			else if (x > y) turun[x] = y;
		}
		for (i = 0 ; i < a ; i++) pos[i] = 1;
		//int _now = 0;
		dadu.clear();
		for (i = 0 ; i < c; i++) {
			int dd;
			cin >> dd;
			dadu.push_back(dd);
		}
		int _now = 0;
		for (i = 0 ; i < c ; i++) {
			int maju=0;
			maju = pos[_now]+dadu[i];
			if (maju >= 100) pos[_now] = 100;
			else {
				if (turun[maju]!=-1) pos[_now] = turun[maju];
				else if (naik[maju]!=-1) pos[_now] = naik[maju];
				else pos[_now] = maju;
			}
			if (pos[_now]==100) break;
			_now = (_now+1)%a;
		}
		for (i = 0 ; i < a ; i++) {
			cout << "Position of player " << i+1 << " is " << pos[i] << "." << '\n';
		}
	}
	return 0;
}