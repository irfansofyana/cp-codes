#include <bits/stdc++.h>
using namespace std;

int n,i,j,k,z;
int A[105][105],B[100],C[100];
int tc;
string ans[100];

void isi(){
	int idx = 1;
	for (i = 1; i<= 52 ; i++) ans[i] = "";
	for (i = 1 ; i <= 4 ; i++) {
		for (j = 1 ; j<=13 ; j++) {
			if (j<9) ans[idx] = char(j+1+'0')+ans[idx];
			else if (j==9) ans[idx] = "10"+ans[idx];
			else if (j==10) ans[idx] = "Jack"+ans[idx];
			else if (j==11) ans[idx] = "Queen"+ans[idx];
			else if (j==12) ans[idx] = "King"+ans[idx];
			else if (j==13) ans[idx] = "Ace"+ans[idx];
			idx++;
		}
	}
//	for (i = 1; i<= 52 ; i++) {
	//	cout << ans[i] << endl;
	//}
	for (i = 1 ; i <= 52 ; i++) {
		ans[i] = ans[i]+" of";
		if (i<=13) ans[i] = ans[i] + " Clubs";
		else if (i<=26) ans[i] = ans[i] + " Diamonds";
		else if (i<=39) ans[i] = ans[i] + " Hearts";
		else ans[i] = ans[i] + " Spades";
	}
}

int main(){
	cin.tie(0);
	isi();
	cin >> tc;
	//cout << endl;
	for (int nn = 0 ; nn < tc ; nn++) {
		cin >> n;
		for (i = 1 ; i <= n ; i++) {
			for (j = 1 ; j <= 52 ; j++){
				cin >> A[i][j]; 
			}
		}
		for (i = 1 ; i <= 52 ; i++) 
			B[i] = i;
		for (z = 0 ; z < n ; z++) {
			cin >> k;
			for (i = 1 ; i<=52 ; i++) {
				C[i] = B[A[k][i]];
			}
			for (i = 1 ; i<=52 ; i++) 
				B[i] = C[i];
			//cout << B[52] << endl;
		}
		//cout << B[1] << endl;
		for (i = 1; i<= 52 ; i++) {
			cout << ans[B[i]] << endl;
		}
		if (nn!=tc-1) cout << endl;
	}
	return 0;
}