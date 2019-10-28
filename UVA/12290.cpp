#include <bits/stdc++.h>
#define OPTIMASI
using namespace std;

const int MAXX = (int)1e6;

int n,m,k,i,j;
bool canseven[MAXX+5];
int arr[105];

void generate(){
	memset(canseven,false,sizeof canseven);
	for (i = 1 ; i <= MAXX; i++) {
		if (i%7 == 0) canseven[i] = true;
		else {
			j = i;
			while (j > 0) {
				if (j%10 == 7) {
					canseven[i] = true;
					break;
				}
				j /= 10;
			}
		}
	}
}

int solve(){
	bool naik = true;
	j = 1;
	memset(arr,0,sizeof arr);
	for (i = 1 ; i <= MAXX; i++) {
		if (canseven[i]) {
			arr[j]++;
			if (j == m && arr[j] == k) {
				return i;
			}
			if (j == n) {
				naik = false;
			}
			else if (j == 1) {
				naik = true;
			}
			j += (naik ? 1 : -1);
		}
		else {
			if (j == n) {
				naik = false;
			}
			else if (j == 1) {
				naik = true;
			}
			j += (naik ? 1 : -1);
		}
	}
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	generate();
	while (cin >> n >> m >> k) {
		if (n == 0 && m == 0 && k == 0) return 0;
		else cout << solve() << '\n';
	}
	return 0;
}