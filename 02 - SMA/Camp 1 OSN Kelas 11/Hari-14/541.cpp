#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int tc,gan1,gan2;
int A[105][105],baris[105],kolom[105];

int main(){
	cin.tie(0);
	while (cin >> n && n!=0) {
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < n ; j++){
				cin >> A[i][j];
			}
		memset(baris,0,sizeof baris); memset(kolom,0,sizeof kolom);
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				baris[i] += A[i][j];
			}
		}
		for (j = 0 ; j < n ; j++) {
			for (i = 0 ; i < n ; i++)
				kolom[j] += A[i][j];
		}
		gan1 = gan2 = 0;
		for (i = 0 ; i < n ; i++) {
			if (baris[i]%2==1) {
				gan1++;
			}
		}
		for (i = 0 ; i < n  ; i++) {
			if (kolom[i]%2==1) {
				gan2++;
			}
		}
		/*for (i = 0 ; i < n ; i++) 
			cout << kolom[i] << " " ;
		cout << endl;
		for (i = 0 ; i < n ; i++)
			cout << baris[i] << " ";
		cout << endl;*/
		if (gan1==0 && gan2==0) puts("OK");
		else if (gan1==1 && gan2==1) {
			for (i = 0 ; i < n ; i++)
				if (baris[i]%2==1) {
					gan1 = i; break;
				}
			for (i = 0 ; i < n ; i++) 
				if (kolom[i]%2==1) {
					gan2 = i; break;
				}
			cout << "Change bit (" << gan1+1 << ',' << gan2+1 << ")" << endl;
		}
		else cout << "Corrupt" << endl;
	}
	return 0;
}