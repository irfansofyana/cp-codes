#include <bits/stdc++.h>
using namespace std;

string dummy;
int n,i,j,awal;
int berapa,prevv;
int mid,l,r;
int ans[2015];

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << "init\n" << flush;
	cin >> dummy >> n;
	if (n == 1) {
		for (i = 1 ; i <= 1000; i++) {
			cout << "ask " << i << '\n';
			cout << flush;
			cin >> berapa;
			if (berapa == 1) {
				cout << "answer " << i-1 << '\n';
				cout << flush;
				return 0;
			}
		}
	}
	else {
		bool cek = true;
		while (1) {
			if (cek) {
				cek = false;
				cout << "ask ";
				for (i = 1 ; i <= n ; i++) {
					ans[i] = 1000;
					cout << 1000 ;
					cout << (i==n ? '\n' : ' ');
				}
				cout << flush;
				cin >> berapa;
				prevv = berapa;
				awal = berapa;
				if (berapa == 0) {
					cout << "answer ";
					for (i = 1 ; i <= n ; i++) {
						cout << 1000;
						cout << (i==n ? '\n': ' ');
					}
					return 0;
				}
			}
			else {
				for (i = 1 ; i <= n ; i++) {
					l = 1; r = 1000;
					int ret = -1;
					while (l<=r) {
						mid = (l+r)/2;
						cout << "ask ";
						for (j = 1 ; j <= n ; j++){
							if (i==j) cout << mid ;
							else cout << ans[j];
							cout << (j==n ? '\n': ' ');
						}
						cout << flush;
						cin >> berapa;
						if (berapa >= prevv) {
							r = mid-1;
						}
						else if (berapa < prevv) {
							ret = mid;
							l = mid+1;
						}
					}
					ans[i] = ret;
					awal--;
					prevv = awal;
					cout << "ask ";
					for (j = 1 ; j <= n ; j++) {
						cout << ans[j];
						cout << (j==n ? '\n': ' ');
					}
					cout << flush;
					cin >> berapa;
					if (berapa == 0) {
						cout << "answer ";
						for (int ii = 1 ; ii <= n ; ii++) {
							cout << ans[ii] ;
							cout << (ii==n ? '\n' : ' ');
						}
						return 0;
					}
				}
				cout << "answer ";
				for (i = 1 ; i <= n ; i++) {
					cout << ans[i] ;
					cout << (i==n ? '\n' : ' ');
				}
				return 0;
			}
		}
	}
	return 0;
}