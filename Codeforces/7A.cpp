#include <bits/stdc++.h>
using namespace std;

int i,j,ans;
char A[8][8];

int main(){
	cin.tie(0);
	for (i=0;i<8;i++)
		for (j=0;j<8;j++)
			cin >> A[i][j];
	for (i=0;i<8;i++) {
		int temp = 0;
		for (j=0;j<8;j++)
			if (A[i][j]=='B') temp++;
		if (temp==8) ans++;
		temp = 0;
		for (j=0;j<8;j++) 
			if (A[j][i]=='B') temp++;
		if (temp==8) ans++;
	}
	cout << (ans==16?8:ans) << endl;
	return 0;
}
