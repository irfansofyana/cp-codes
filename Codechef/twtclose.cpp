#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int A[1005],x,banyak;
string perintah;

int main(){
	cin.tie(0);
	cin >> n >> k;
	while (k--) {
		cin >> perintah;
		if (perintah=="CLICK") { 
			cin >> x;
			if (A[x]==0) {
				banyak++;
				A[x] = 1;
			}
			else {
				banyak--;
				A[x] = 0;
			}
		}
		else if (perintah=="CLOSEALL") {
			memset(A,0,sizeof A);
			banyak = 0;
		}
		cout << banyak << endl;
	}
	return 0;
}