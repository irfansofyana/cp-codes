#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char A[20][20];
int tc,a,b,t;
string s;

void transpos(){
	int i,j;
	char B[20][20];
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < n ; j++)
			B[i][j] = A[i][j];
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j++) {
			A[i][j] = B[j][i];
		}
	}
}

void baris(int p,int q) {
	char temp[20];
	int i,j;
	for (i = 0 ; i < n ; i++) 
		temp[i] = A[p][i];
	for (i = 0 ; i < n ; i++) 
		A[p][i] = A[q][i];
	for (i = 0 ; i < n ; i++)
		A[q][i] = temp[i];
}

void kolom(int p,int q){
	char temp[20];
	int i,j;
	for (i = 0 ; i < n ; i++)
		temp[i] = A[i][p];
	for (i = 0 ; i < n ; i++)
		A[i][p] = A[i][q];
	for (i = 0 ; i < n ; i++)
		A[i][q] = temp[i];
}

void tambah() {
	int i,j;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < n ; j++) {
			 if (A[i][j]=='9') A[i][j] = '0';
			 else A[i][j] = char((int)A[i][j]+1);
		}
}

void kurang() {
	int i,j;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < n; j++) {
			if (A[i][j]=='0') A[i][j] = '9';
			else A[i][j] = char((int)A[i][j]-1);
		}
}

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n;
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < n ; j++)
				cin >> A[i][j];
		cin >> m;
		while (m--) {
			cin >> s;
			if (s=="transpose") {
				transpos();
			}
			else if (s=="row") {
				cin >> a >> b;	
				a--; b--;
				baris(a,b);
			}
			else if (s=="col") {
				cin >> a >> b;
				a--; b--;
				kolom(a,b);
			}
			else if (s=="inc") {
				tambah();
			}
			else if (s=="dec") {
				kurang();
			}
		}
		cout << "Case #" << ++t << endl;
		for (i = 0 ; i < n ; i++){
			for (j = 0 ; j < n ; j++) {
				cout << A[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}