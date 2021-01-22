#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,m,i,j;
int t;
char arr[10][6];
char A[1005][6];

void generate(){
	arr[0][0] = 'a'; arr[0][1] = 'b'; arr[0][2] = 'c'; arr[0][3] = 'd'; arr[0][4] = 'e';
	arr[1][0] = 'f'; arr[1][1] = 'g'; arr[1][2] = 'h'; arr[1][3] = 'i'; arr[1][4] = 'j';
	arr[2][0] = 'k'; arr[2][1] = 'l'; arr[2][2] = 'm'; arr[2][3] = 'n'; arr[2][4] = 'o';
	arr[3][0] = 'p'; arr[3][1] = 'q'; arr[3][2] = 'r'; arr[3][3] = 's'; arr[3][4] = 't';
	arr[4][0] = 'u'; arr[4][1] = 'v'; arr[4][2] = 'w'; arr[4][3] = 'x'; arr[4][4] = 'y';
	arr[5][0] = 'z'; arr[5][1] = '!'; arr[5][2] = '.'; arr[5][3] = ','; arr[5][4] = '?';
	arr[6][0] = '0'; arr[6][1] = '1'; arr[6][2] = '2'; arr[6][3] = '3'; arr[6][4] = '4';
	arr[7][0] = '5'; arr[7][1] = '6'; arr[7][2] = '7'; arr[7][3] = '8'; arr[7][4] = '9';
}

int cari(char c){
	if (c == '|') return 1;
	else if (c == '/') return 2;
	else if (c == '.') return 3;
	else if (c == '-') return 4;
	else if (c == 'x') return 5;
	else if (c == '+') return 6;
	else if (c == '=') return 7;
	else if (c == '*' ) return 8;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	string ans = "";
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		char tanda;
		int bil;
		for (j = 0 ; j < 5 ; j++) {
			cin >> A[i][j];
			if (!(A[i][j] >= 'A' && A[i][j] <= 'Z')) {
				tanda = A[i][j];	//ANGKA
				bil = j;			//HURUF
			}
		}
		ans += arr[cari(tanda)-1][bil];
	}
	cout << ans ;
	return 0;
}