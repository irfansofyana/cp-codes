#include <bits/stdc++.h>
using namespace std;
int n,i,j,k;
char A[15][15];
int t,ans,idx,idy,jdx,jdy;
bool bisa,buat;

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i=1;i<=n;i++) 
			for (j=1;j<=n;j++)
				cin >> A[i][j];
		for (k=n;k>=1;k--) {
			idx = idy = 1;
			jdx = jdy = k;
			while (jdx<=n) {
				idy = 1; jdy = k;
				while (jdy<=n) {
					buat = true;
					for (i=idx;i<=jdx;i++) {
						for (j=idy;j<=jdy;j++) {
							if (A[i][j]=='#') {
								buat = false;
								break;
							} 
						}
						if (!buat) break;
					}
					if (buat) break;
					else {
						idy++;
						jdy++;
					}
				}
				if (buat) break;
				else {
					idx++;
					jdx++;
				}
			}
			if (buat) break;
		}
		cout << k << endl;
	}
}
