#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,tc,k;
char A[55][55];

bool cek(int x,int y){
	return (x>=0 && x<n && y>=0 && y <m);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < m ; j++)
				cin >> A[i][j];
		int ans = 100000000;
		for (i = 0 ; i < m ; i++) {
			j = 0;
			int butuh = 0;
			bool _can = true;
			while (j < n) {
				if (A[j][i]=='0') j++;
				else {
					int _back = 1;
					k = i-1;
					bool _canback = false;
					while (k >= 0 && k < m) {
						if (A[j][k]=='1') {
							_back++;
							k--;
						}
						else {
							_canback = true;
							break;
						}
					}
					int _front = 1;
					k = i+1;
					bool _canfront = false;
					while (k >=0 && k < m) {
						if (A[j][k]=='1') {
							_front++;
							k++;
						}
						else {
							_canfront = true;
							break;
						}
					}
					if (_canfront && !_canback) butuh +=_front;
					else if (!_canfront && _canback) butuh += _back;
					else if (_canback && _canfront) butuh += min(_front,_back);
					else {_can = false; break;}
					j++;
				}
			}
			if (_can) ans = min(ans,butuh);
		}
		cout << "Case " << ++tc << ": " << (ans==100000000 ? -1 : ans) << '\n';
	}
	return 0;
}