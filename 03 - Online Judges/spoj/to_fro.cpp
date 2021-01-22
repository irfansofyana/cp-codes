#include <bits/stdc++.h>
using namespace std;

int t,n,i,j,k;
char A[50][50];
string s,ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n , n>0) {
		cin >> s;
		j = 0;
		for (i = 0 ; i < (int)s.size()/n ; i++) {
			if (i%2==0) {
				for (k = 0 ; k < n; k++) {
					A[i][k] = s[j]; j++;
				}
			}
			else {
				for (k = n-1; k >=0; k--) {
					A[i][k] = s[j]; j++;
				}
			}
		}
		/*for (i = 0 ; i < (int)s.size()/n ; i++) {
			for (j = 0 ; j < n ; j++) 
				cout << A[i][j] << " ";
			cout << '\n';
		} */
		ans = "";
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < (int)s.size()/n; j++) {
				ans = ans + A[j][i];
			}
		}
		cout << ans << '\n';
	}
	return 0;
}