#include <bits/stdc++.h>
using namespace std;

long long tc,n,i,j,t,x,y;
char ch;
long long A[105][105];
bool ans;
pair<long long , long long> a,b;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> tc;
	while (tc--) {
		cin >> ch >> ch >> n;
		ans = true;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ;j++) {
				cin >> A[i][j];
				if (A[i][j]<0) ans = false;
			}
		}
		if (!ans) cout << "Test #" << ++t << ": Non-symmetric." << endl;
		else if (n%2==0) {
			for (i = 0 ; i < n ; i++) {
				x = 0 ; y = n-1;
				for (j = 0 ; j < (n/2); j++) {
					if (A[i][x]!=A[i][y]) ans = false;
					else {x++; y--;}
				}
			}
			if (!ans) cout << "Test #" << ++t << ": Non-symmetric." << endl;
			else cout << "Test #" << ++t << ": Symmetric." << endl;
		}
		else if (n%2==1){
			x = (n-1)/2; y = (n-1)/2;
			a = make_pair(x-1,y); b = make_pair(x+1,y);
			for (i = 1 ; i<= (n-1)/2 ; i++) {
				if (A[a.first][a.second]!=A[b.first][b.second]) ans = false;
				else {a = make_pair(a.first-1,a.second); b = make_pair(b.first+1,b.second); }
			}
			a = make_pair(x-1,y-1); b = make_pair(x+1,y+1);
			for (i = 1 ; i<= (n-1)/2; i++) {
				if (A[a.first][a.second]!=A[b.first][b.second]) ans = false;
				else {a = make_pair(a.first-1,a.second-1); b = make_pair(a.first+1,a.second+1); }
			}
			a = make_pair(x,y-1); b = make_pair(x,y+1);
			for (i = 1; i <= (n-1)/2; i++) {
				if (A[a.first][a.second]!=A[b.first][b.second]) ans = false;
				else {a = make_pair(a.first,a.second-1); b = make_pair(a.first,b.second+1); }
			}
			a = make_pair(x-1,y+1); b = make_pair(x+1,y-1);
			for (i = 1 ; i<= (n-1)/2 ; i++) {
				if (A[a.first][a.second]!=A[b.first][b.second]) ans = false;
				else {a = make_pair(a.first-1,a.second+1); b = make_pair(b.first+1,b.second-1); }
			}
			if (!ans) cout << "Test #" << ++t << ": Non-symmetric." << endl;
			else cout << "Test #" << ++t << ": Symmetric." << endl;
		}
	}
	return 0;
}