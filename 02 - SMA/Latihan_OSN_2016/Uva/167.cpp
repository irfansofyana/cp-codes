#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int t;
int A[66][66];
int pos[10];
int ans ;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		for (i = 0 ; i < 8 ; i++)
			for (j = 0 ; j < 8 ; j++)
				cin >> A[i][j];
		for (i = 0 ; i < 8; i++)
			pos[i] = i;			// baris ke-i kolom ke-i
		ans = -1;
		do {
			bool _can = true;
			for (i = 0 ; i < 7 ; i++){
				for (j = i+1 ; j < 8; j++){
					int b1,k1,b2,k2;
					b1 = pos[i]; k1 = i;
					b2 = pos[j]; k2 = j;
					if (b1==b2 || k1==k2 || abs(b1-b2)==abs(k1-k2)){
						_can = false;
						break;
					}
				}
				if (!_can) break; 
			}
			int tot = 0;
			if (_can) {
				for (i = 0 ; i < 8 ; i++){
					tot += A[pos[i]][i];
				}
				ans = max(ans,tot);
			}
		}while (next_permutation(pos,pos+8));
		j = ans;
		int frek = 0;
		while (j > 0) {
			frek++;
			j/=10;
		}
		for (i = 0 ; i < 5-frek ; i++) cout << " "; cout << ans << '\n';
	}
	return 0;
}