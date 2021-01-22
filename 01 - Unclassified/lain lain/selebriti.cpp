#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,q,y;
int i,j;
string respon;
bool tanya[105][105];
bool jawaban[105][105];

void solve(int tipe){
	bool bisa[n + 1];
		memset(bisa, true, sizeof bisa);
		memset(tanya, false, sizeof tanya);
		int tot = n;
		while (tot > 1) {
			int satu = 0;
			int dua = 0;
			for (i = 1; i <= n ; i++){
				if (bisa[i]) {
					if (satu == 0) satu = i;
					else {
						dua = i;
						break;
					}
				}
			}
			cout << "? " << satu << " " << dua << '\n';
			tanya[satu][dua] = true;
			fflush(stdout); //cout << flush
			cin >> respon;
			if (respon == "YA") {
				bisa[satu] = false;
				jawaban[satu][dua] = true;
			}
			else {
				bisa[dua] = false;
				jawaban[satu][dua] = false;
			}
			tot--;
		}

		int x = 0;
		for (i = 1 ; i <= n ; i++) {
			if (bisa[i] && tipe == 1) {
				cout << "! " << i << '\n';
				fflush(stdout);
				//return 0;
				exit(0);
			}
			else if (bisa[i]) {
				x = i;
			}
		}

		bool jaw = true;
		//cout << "sisa " << x << '\n';
		for (i = 1; i <= n ; i++) {
			if (i != x) {
				if (!tanya[i][x]){
					cout << "? " << i << " " << x << '\n';
					fflush(stdout);
					tanya[i][x] = true;
					cin >> respon;
					if (respon == "TIDAK") {
						//cout << "! " << 0 << '\n';
						//fflush(stdout);
						//return 0;
						//exit(0);
						jaw = false;
						break;
					}
				}
				else if (tanya[i][x]) {
					if (jawaban[i][x] == false) {
						//cout << "! " << 0 << '\n';
						//fflush(stdout);
						//exit(0);
						jaw = false;
						break;
					}
				}

				if (!tanya[x][i]) {
					cout << "? " << x << " " << i << '\n';
					fflush(stdout);
					tanya[x][i] = true;
					cin >> respon;
					if (respon == "YA") {
						jaw = false;
						break;
					}
				}
				else if (tanya[x][i]) {
					if (jawaban[x][i] == true){
						jaw = false;
						break;
					}
				}
			}
		}
		if (jaw) cout << "! " << x << '\n';
		else cout << "! " << 0 << '\n';
		fflush(stdout);
		exit(0);
}

int main(){
	cin >> n >> q >> y;
	if (y == 1) {
		solve(1);
	}
	else {
		solve(0);
	}
	return 0;
}